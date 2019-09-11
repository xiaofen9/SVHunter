/* Generated automatically -- do not modify!    -*- buffer-read-only: t -*- */

#include <config.h>
#include "ovn/lib/ovn-nb-idl.h"
#include <limits.h>
#include "ovs-thread.h"
#include "ovsdb-data.h"
#include "ovsdb-error.h"
#include "util.h"



static struct nbrec_acl *
nbrec_acl_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_acl, header_) : NULL;
}

static struct nbrec_address_set *
nbrec_address_set_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_address_set, header_) : NULL;
}

static struct nbrec_connection *
nbrec_connection_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_connection, header_) : NULL;
}

static struct nbrec_dhcp_options *
nbrec_dhcp_options_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_dhcp_options, header_) : NULL;
}

static struct nbrec_dns *
nbrec_dns_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_dns, header_) : NULL;
}

static struct nbrec_gateway_chassis *
nbrec_gateway_chassis_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_gateway_chassis, header_) : NULL;
}

static struct nbrec_load_balancer *
nbrec_load_balancer_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_load_balancer, header_) : NULL;
}

static struct nbrec_logical_router *
nbrec_logical_router_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_logical_router, header_) : NULL;
}

static struct nbrec_logical_router_port *
nbrec_logical_router_port_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_logical_router_port, header_) : NULL;
}

static struct nbrec_logical_router_static_route *
nbrec_logical_router_static_route_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_logical_router_static_route, header_) : NULL;
}

static struct nbrec_logical_switch *
nbrec_logical_switch_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_logical_switch, header_) : NULL;
}

static struct nbrec_logical_switch_port *
nbrec_logical_switch_port_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_logical_switch_port, header_) : NULL;
}

static struct nbrec_nat *
nbrec_nat_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_nat, header_) : NULL;
}

static struct nbrec_nb_global *
nbrec_nb_global_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_nb_global, header_) : NULL;
}

static struct nbrec_qos *
nbrec_qos_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_qos, header_) : NULL;
}

static struct nbrec_ssl *
nbrec_ssl_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_ssl, header_) : NULL;
}

/* ACL table. */

static void
nbrec_acl_parse_action(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_acl *row = nbrec_acl_cast(row_);

    if (datum->n >= 1) {
        row->action = datum->keys[0].string;
    } else {
        row->action = "";
    }
}

static void
nbrec_acl_parse_direction(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_acl *row = nbrec_acl_cast(row_);

    if (datum->n >= 1) {
        row->direction = datum->keys[0].string;
    } else {
        row->direction = "";
    }
}

static void
nbrec_acl_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_acl *row = nbrec_acl_cast(row_);
    smap_init(&row->external_ids);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_acl_parse_log(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_acl *row = nbrec_acl_cast(row_);

    if (datum->n >= 1) {
        row->log = datum->keys[0].boolean;
    } else {
        row->log = false;
    }
}

static void
nbrec_acl_parse_match(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_acl *row = nbrec_acl_cast(row_);

    if (datum->n >= 1) {
        row->match = datum->keys[0].string;
    } else {
        row->match = "";
    }
}

static void
nbrec_acl_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_acl *row = nbrec_acl_cast(row_);

    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = NULL;
    }
}

static void
nbrec_acl_parse_priority(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_acl *row = nbrec_acl_cast(row_);

    if (datum->n >= 1) {
        row->priority = datum->keys[0].integer;
    } else {
        row->priority = 0;
    }
}

static void
nbrec_acl_parse_severity(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_acl *row = nbrec_acl_cast(row_);

    if (datum->n >= 1) {
        row->severity = datum->keys[0].string;
    } else {
        row->severity = NULL;
    }
}

static void
nbrec_acl_unparse_action(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_acl_unparse_direction(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_acl_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_acl *row = nbrec_acl_cast(row_);
    smap_destroy(&row->external_ids);
}

static void
nbrec_acl_unparse_log(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_acl_unparse_match(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_acl_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_acl_unparse_priority(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_acl_unparse_severity(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_acl_init__(struct ovsdb_idl_row *row)
{
    nbrec_acl_init(nbrec_acl_cast(row));
}

/* Clears the contents of 'row' in table "ACL". */
void
nbrec_acl_init(struct nbrec_acl *row)
{
    memset(row, 0, sizeof *row); 
    row->action = "";
    row->direction = "";
    smap_init(&row->external_ids);
    row->match = "";
}

/* Searches table "ACL" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_acl *
nbrec_acl_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_acl_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_acl, uuid));
}

/* Returns a row in table "ACL" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_acl *
nbrec_acl_first(const struct ovsdb_idl *idl)
{
    return nbrec_acl_cast(ovsdb_idl_first_row(idl, &nbrec_table_acl));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_acl *
nbrec_acl_next(const struct nbrec_acl *row)
{
    return nbrec_acl_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_acl_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_acl);
}

unsigned int nbrec_acl_row_get_seqno(const struct nbrec_acl *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_acl *
nbrec_acl_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_acl_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_acl));
}

const struct nbrec_acl
*nbrec_acl_track_get_next(const struct nbrec_acl *row)
{
    return nbrec_acl_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "ACL".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_acl_delete(const struct nbrec_acl *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "ACL" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_acl *
nbrec_acl_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_acl_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_acl, NULL));
}

bool
nbrec_acl_is_updated(const struct nbrec_acl *row, enum nbrec_acl_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_acl_columns[column]);
}

/* Causes the original contents of column "action" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "action" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "action" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "action" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_acl_insert()).
 *
 *   - If "action" has already been modified (with
 *     nbrec_acl_set_action()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_acl_set_action() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_acl_verify_action(const struct nbrec_acl *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_acl_col_action);
}

/* Causes the original contents of column "direction" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "direction" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "direction" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "direction" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_acl_insert()).
 *
 *   - If "direction" has already been modified (with
 *     nbrec_acl_set_direction()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_acl_set_direction() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_acl_verify_direction(const struct nbrec_acl *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_acl_col_direction);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_acl_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_acl_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_acl_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_acl_verify_external_ids(const struct nbrec_acl *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_acl_col_external_ids);
}

/* Causes the original contents of column "log" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "log" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "log" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "log" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_acl_insert()).
 *
 *   - If "log" has already been modified (with
 *     nbrec_acl_set_log()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_acl_set_log() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_acl_verify_log(const struct nbrec_acl *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_acl_col_log);
}

/* Causes the original contents of column "match" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "match" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "match" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "match" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_acl_insert()).
 *
 *   - If "match" has already been modified (with
 *     nbrec_acl_set_match()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_acl_set_match() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_acl_verify_match(const struct nbrec_acl *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_acl_col_match);
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
 *     nbrec_acl_insert()).
 *
 *   - If "name" has already been modified (with
 *     nbrec_acl_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_acl_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_acl_verify_name(const struct nbrec_acl *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_acl_col_name);
}

/* Causes the original contents of column "priority" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "priority" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "priority" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "priority" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_acl_insert()).
 *
 *   - If "priority" has already been modified (with
 *     nbrec_acl_set_priority()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_acl_set_priority() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_acl_verify_priority(const struct nbrec_acl *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_acl_col_priority);
}

/* Causes the original contents of column "severity" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "severity" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "severity" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "severity" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_acl_insert()).
 *
 *   - If "severity" has already been modified (with
 *     nbrec_acl_set_severity()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_acl_set_severity() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_acl_verify_severity(const struct nbrec_acl *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_acl_col_severity);
}

/* Returns the "action" column's value from the "ACL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes action's
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
 * directly through the "action" member in nbrec_acl. */
const struct ovsdb_datum *
nbrec_acl_get_action(const struct nbrec_acl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_acl_col_action);
}

/* Returns the "direction" column's value from the "ACL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes direction's
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
 * directly through the "direction" member in nbrec_acl. */
const struct ovsdb_datum *
nbrec_acl_get_direction(const struct nbrec_acl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_acl_col_direction);
}

/* Returns the "external_ids" column's value from the "ACL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
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
 * directly through the "external_ids" member in nbrec_acl. */
const struct ovsdb_datum *
nbrec_acl_get_external_ids(const struct nbrec_acl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_acl_col_external_ids);
}

/* Returns the "log" column's value from the "ACL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes log's
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
 * directly through the "log" member in nbrec_acl. */
const struct ovsdb_datum *
nbrec_acl_get_log(const struct nbrec_acl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &nbrec_acl_col_log);
}

/* Returns the "match" column's value from the "ACL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes match's
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
 * directly through the "match" member in nbrec_acl. */
const struct ovsdb_datum *
nbrec_acl_get_match(const struct nbrec_acl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_acl_col_match);
}

/* Returns the "name" column's value from the "ACL" table in 'row'
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
 * directly through the "name" member in nbrec_acl. */
const struct ovsdb_datum *
nbrec_acl_get_name(const struct nbrec_acl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_acl_col_name);
}

/* Returns the "priority" column's value from the "ACL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes priority's
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
 * directly through the "priority" member in nbrec_acl. */
const struct ovsdb_datum *
nbrec_acl_get_priority(const struct nbrec_acl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &nbrec_acl_col_priority);
}

/* Returns the "severity" column's value from the "ACL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes severity's
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
 * directly through the "severity" member in nbrec_acl. */
const struct ovsdb_datum *
nbrec_acl_get_severity(const struct nbrec_acl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_acl_col_severity);
}

/* Sets the "action" column from the "ACL" table in 'row' to
 * 'action'.
 *
 * Argument constraints: one of "allow", "allow-related", "drop", or "reject"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_set_action(const struct nbrec_acl *row, const char *action)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, action);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_acl_col_action, &datum);
}

/* Sets the "direction" column from the "ACL" table in 'row' to
 * 'direction'.
 *
 * Argument constraints: either "from-lport" or "to-lport"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_set_direction(const struct nbrec_acl *row, const char *direction)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, direction);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_acl_col_direction, &datum);
}

/* Sets the "external_ids" column's value from the "ACL" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_acl_set_external_ids(const struct nbrec_acl *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_acl_col_external_ids,
                        &datum);
}


/* Sets the "log" column from the "ACL" table in 'row' to
 * 'log'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_set_log(const struct nbrec_acl *row, bool log)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.boolean = log;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_acl_col_log, &datum);
}

/* Sets the "match" column from the "ACL" table in 'row' to
 * 'match'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_set_match(const struct nbrec_acl *row, const char *match)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, match);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_acl_col_match, &datum);
}

/* Sets the "name" column from the "ACL" table in 'row' to
 * the 'name' set.
 *
 * If "name" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: at most 63 characters long
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_set_name(const struct nbrec_acl *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (name) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, name);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_acl_col_name, &datum);
}

/* Sets the "priority" column from the "ACL" table in 'row' to
 * 'priority'.
 *
 * Argument constraints: in range 0 to 32,767
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_set_priority(const struct nbrec_acl *row, int64_t priority)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.integer = priority;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_acl_col_priority, &datum);
}

/* Sets the "severity" column from the "ACL" table in 'row' to
 * the 'severity' set.
 *
 * If "severity" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: one of "alert", "debug", "info", "notice", or "warning"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_set_severity(const struct nbrec_acl *row, const char *severity)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (severity) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, severity);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_acl_col_severity, &datum);
}

/* Sets an element of the "external_ids" map column from the "ACL" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_acl_update_external_ids_setkey(const struct nbrec_acl *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_acl_col_external_ids,
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "ACL" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_acl_update_external_ids_delkey(const struct nbrec_acl *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_acl_col_external_ids,
                                    datum);
}

/* Adds the value 'new_value' to the "name" set column from the "ACL" table
 * in 'row'.
 *
 */
void
nbrec_acl_update_name_addvalue(const struct nbrec_acl *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_acl_col_name,
                                    datum);
}

/* Deletes the value 'delete_value' from the "name" set column from the
 * "ACL" table in 'row'.
 *
 */
void
nbrec_acl_update_name_delvalue(const struct nbrec_acl *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_acl_col_name,
                                    datum);
}

/* Adds the value 'new_value' to the "severity" set column from the "ACL" table
 * in 'row'.
 *
 */
void
nbrec_acl_update_severity_addvalue(const struct nbrec_acl *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_acl_col_severity,
                                    datum);
}

/* Deletes the value 'delete_value' from the "severity" set column from the
 * "ACL" table in 'row'.
 *
 */
void
nbrec_acl_update_severity_delvalue(const struct nbrec_acl *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_acl_col_severity,
                                    datum);
}

/* Sets the "action" column from the "ACL" table in 'row' to
 * 'action'.
 *
 * Argument constraints: one of "allow", "allow-related", "drop", or "reject"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_add_clause_action(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *action)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, action);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_acl_col_action,
                          &datum);
}

/* Sets the "direction" column from the "ACL" table in 'row' to
 * 'direction'.
 *
 * Argument constraints: either "from-lport" or "to-lport"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_add_clause_direction(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *direction)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, direction);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_acl_col_direction,
                          &datum);
}

/* Sets the "external_ids" column's value from the "ACL" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_acl_add_clause_external_ids(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_acl_col_external_ids,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_acl_col_external_ids.type);
}


/* Sets the "log" column from the "ACL" table in 'row' to
 * 'log'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_add_clause_log(struct ovsdb_idl_condition *cond, enum ovsdb_function function, bool log)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.boolean = log;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_acl_col_log,
                          &datum);
}

/* Sets the "match" column from the "ACL" table in 'row' to
 * 'match'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_add_clause_match(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *match)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, match);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_acl_col_match,
                          &datum);
}

/* Sets the "name" column from the "ACL" table in 'row' to
 * the 'name' set.
 *
 * If "name" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: at most 63 characters long
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_add_clause_name(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (name) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, name);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_acl_col_name,
                          &datum);
}

/* Sets the "priority" column from the "ACL" table in 'row' to
 * 'priority'.
 *
 * Argument constraints: in range 0 to 32,767
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_add_clause_priority(struct ovsdb_idl_condition *cond, enum ovsdb_function function, int64_t priority)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.integer = priority;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_acl_col_priority,
                          &datum);
}

/* Sets the "severity" column from the "ACL" table in 'row' to
 * the 'severity' set.
 *
 * If "severity" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: one of "alert", "debug", "info", "notice", or "warning"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_add_clause_severity(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *severity)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (severity) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, severity);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_acl_col_severity,
                          &datum);
}

/* Destroy 'row' of kind "ACL". The row must have been
 * created with ovsdb_idl_index_init_row.
 */
void
nbrec_acl_index_destroy_row(const struct nbrec_acl *row)
{
    ovsdb_idl_index_destroy_row__(&row->header_);
}
        

/* Creates a new row of kind "ACL". */
struct nbrec_acl *
nbrec_acl_index_init_row(struct ovsdb_idl *idl, const struct ovsdb_idl_table_class *class)
{
    return (struct nbrec_acl *) ovsdb_idl_index_init_row(idl, class);
}

/*  This function is used to compare "nbrec_acl" records on table in iteration loops for compound-index operations.
    After been called, cursor point to current position in the index
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct "nbrec_acl" *const_data1,  const struct "nbrec_acl" *const_data2. Data to be compared.
    Return value: 0 if both data values are equal, -1 if first parameter is less than second and 1 otherwise. */
int
nbrec_acl_index_compare(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_acl *const_data1,  const struct nbrec_acl *const_data2)
{
    struct nbrec_acl *data1 = CONST_CAST(struct nbrec_acl *, const_data1);
    struct nbrec_acl *data2 = CONST_CAST(struct nbrec_acl *, const_data2);
    return ovsdb_idl_index_compare(cursor, &data1->header_, &data2->header_);
}

/*  This function is called to position the cursor at the first row in "nbrec_acl" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The first row in the corresponding index. */
const struct nbrec_acl *
nbrec_acl_index_first(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_acl_cast(ovsdb_idl_index_first(cursor));
}

/*  This function is called to position the cursor at the next row in "nbrec_acl" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The next row in the corresponding index. */
const struct nbrec_acl *
nbrec_acl_index_next(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_acl_cast(ovsdb_idl_index_next(cursor));
}

/*  This function is used to find the data of the row in "nbrec_acl" table that meet criteria with the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_acl *const_data. Data to be searched.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_acl *
nbrec_acl_index_find(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_acl *const_data)
{
    struct nbrec_acl *data = CONST_CAST(struct nbrec_acl *, const_data);
    return nbrec_acl_cast(ovsdb_idl_index_find(cursor, &data->header_));
}

/*  This function is used to set the cursor pointing to the row in "nbrec_acl" table that meet criteria of the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_acl *const_data. Data to be searched.
    Return value: The row in the corresponding index closest to the criteria. */
const struct nbrec_acl *
nbrec_acl_index_forward_to(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_acl *const_data)
{
    struct nbrec_acl *data = CONST_CAST(struct nbrec_acl *, const_data);
    return nbrec_acl_cast(ovsdb_idl_index_forward_to(cursor, &data->header_));
}

/*  This function is used to get the data of the row in the current position pointed by the cursor in
    "nbrec_acl" table.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_acl *
nbrec_acl_index_get_data(const struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_acl_cast(ovsdb_idl_index_data(CONST_CAST(struct ovsdb_idl_index_cursor *, cursor)));
}

/* Sets the "action" column from the "ACL" table in 'row' to
 * 'action'.
 *
 * Argument constraints: one of "allow", "allow-related", "drop", or "reject"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_index_set_action(const struct nbrec_acl *row, const char *action)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, action);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_acl_columns[ NBREC_ACL_COL_ACTION ], &datum, &nbrec_table_classes[NBREC_TABLE_ACL]);
}

/* Sets the "direction" column from the "ACL" table in 'row' to
 * 'direction'.
 *
 * Argument constraints: either "from-lport" or "to-lport"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_index_set_direction(const struct nbrec_acl *row, const char *direction)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, direction);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_acl_columns[ NBREC_ACL_COL_DIRECTION ], &datum, &nbrec_table_classes[NBREC_TABLE_ACL]);
}

/* Sets the "external_ids" column's value from the "ACL" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_acl_index_set_external_ids(const struct nbrec_acl *row, const struct smap *external_ids)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(external_ids);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_acl_columns[NBREC_ACL_COL_EXTERNAL_IDS],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_ACL]);
}


/* Sets the "log" column from the "ACL" table in 'row' to
 * 'log'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_index_set_log(const struct nbrec_acl *row, bool log)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->boolean = log;
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_acl_columns[ NBREC_ACL_COL_LOG ], &datum, &nbrec_table_classes[NBREC_TABLE_ACL]);
}

/* Sets the "match" column from the "ACL" table in 'row' to
 * 'match'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_index_set_match(const struct nbrec_acl *row, const char *match)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, match);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_acl_columns[ NBREC_ACL_COL_MATCH ], &datum, &nbrec_table_classes[NBREC_TABLE_ACL]);
}

/* Sets the "name" column from the "ACL" table in 'row' to
 * the 'name' set.
 *
 * If "name" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: at most 63 characters long
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_index_set_name(const struct nbrec_acl *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof (union ovsdb_atom));

    if (name) {
        datum.n = 1;
        datum.keys = key;
        key->string = CONST_CAST(char *, name);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_acl_columns[ NBREC_ACL_COL_NAME ], &datum, &nbrec_table_classes[NBREC_TABLE_ACL]);
}

/* Sets the "priority" column from the "ACL" table in 'row' to
 * 'priority'.
 *
 * Argument constraints: in range 0 to 32,767
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_index_set_priority(const struct nbrec_acl *row, int64_t priority)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->integer = priority;
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_acl_columns[ NBREC_ACL_COL_PRIORITY ], &datum, &nbrec_table_classes[NBREC_TABLE_ACL]);
}

/* Sets the "severity" column from the "ACL" table in 'row' to
 * the 'severity' set.
 *
 * If "severity" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: one of "alert", "debug", "info", "notice", or "warning"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_index_set_severity(const struct nbrec_acl *row, const char *severity)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof (union ovsdb_atom));

    if (severity) {
        datum.n = 1;
        datum.keys = key;
        key->string = CONST_CAST(char *, severity);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_acl_columns[ NBREC_ACL_COL_SEVERITY ], &datum, &nbrec_table_classes[NBREC_TABLE_ACL]);
}

struct ovsdb_idl_column nbrec_acl_columns[NBREC_ACL_N_COLUMNS];

void
nbrec_acl_set_condition(struct ovsdb_idl *idl, struct ovsdb_idl_condition *condition)
{
    ovsdb_idl_set_condition(idl, &nbrec_table_acl, condition);
}
static union ovsdb_atom ACL_col_action_key_enum_keys[4] = {
    { .string = "allow" },
    { .string = "allow-related" },
    { .string = "drop" },
    { .string = "reject" },
};
static struct ovsdb_datum ACL_col_action_key_enum = {
    .n = 4,
    .keys = ACL_col_action_key_enum_keys,
};
static union ovsdb_atom ACL_col_direction_key_enum_keys[2] = {
    { .string = "from-lport" },
    { .string = "to-lport" },
};
static struct ovsdb_datum ACL_col_direction_key_enum = {
    .n = 2,
    .keys = ACL_col_direction_key_enum_keys,
};
static union ovsdb_atom ACL_col_severity_key_enum_keys[5] = {
    { .string = "alert" },
    { .string = "debug" },
    { .string = "info" },
    { .string = "notice" },
    { .string = "warning" },
};
static struct ovsdb_datum ACL_col_severity_key_enum = {
    .n = 5,
    .keys = ACL_col_severity_key_enum_keys,
};

struct ovsdb_idl_column nbrec_acl_columns[NBREC_ACL_N_COLUMNS] = {
    [NBREC_ACL_COL_ACTION] = {
         .name = "action",
         .type = {
            .key = {
               .type = OVSDB_TYPE_STRING,
               .enum_ = &ACL_col_action_key_enum,
               .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 1,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_acl_parse_action,
         .unparse = nbrec_acl_unparse_action,
    },

    [NBREC_ACL_COL_DIRECTION] = {
         .name = "direction",
         .type = {
            .key = {
               .type = OVSDB_TYPE_STRING,
               .enum_ = &ACL_col_direction_key_enum,
               .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 1,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_acl_parse_direction,
         .unparse = nbrec_acl_unparse_direction,
    },

    [NBREC_ACL_COL_EXTERNAL_IDS] = {
         .name = "external_ids",
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
         .parse = nbrec_acl_parse_external_ids,
         .unparse = nbrec_acl_unparse_external_ids,
    },

    [NBREC_ACL_COL_LOG] = {
         .name = "log",
         .type = {
            .key = {
               .type = OVSDB_TYPE_BOOLEAN,
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 1,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_acl_parse_log,
         .unparse = nbrec_acl_unparse_log,
    },

    [NBREC_ACL_COL_MATCH] = {
         .name = "match",
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
         .parse = nbrec_acl_parse_match,
         .unparse = nbrec_acl_unparse_match,
    },

    [NBREC_ACL_COL_NAME] = {
         .name = "name",
         .type = {
            .key = {
               .type = OVSDB_TYPE_STRING,
               .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_acl_parse_name,
         .unparse = nbrec_acl_unparse_name,
    },

    [NBREC_ACL_COL_PRIORITY] = {
         .name = "priority",
         .type = {
            .key = {
               .type = OVSDB_TYPE_INTEGER,
               .u.integer = { .min = INT64_C(0), .max = INT64_C(32767) },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 1,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_acl_parse_priority,
         .unparse = nbrec_acl_unparse_priority,
    },

    [NBREC_ACL_COL_SEVERITY] = {
         .name = "severity",
         .type = {
            .key = {
               .type = OVSDB_TYPE_STRING,
               .enum_ = &ACL_col_severity_key_enum,
               .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_acl_parse_severity,
         .unparse = nbrec_acl_unparse_severity,
    },

};

/* Address_Set table. */

static void
nbrec_address_set_parse_addresses(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_address_set *row = nbrec_address_set_cast(row_);
    row->addresses = NULL;
    row->n_addresses = 0;
    for (size_t i = 0; i < datum->n; i++) {
        if (!row->n_addresses) {
            row->addresses = xmalloc(datum->n * sizeof *row->addresses);
        }
        row->addresses[row->n_addresses] = datum->keys[i].string;
        row->n_addresses++;
    }
}

static void
nbrec_address_set_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_address_set *row = nbrec_address_set_cast(row_);
    smap_init(&row->external_ids);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_address_set_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_address_set *row = nbrec_address_set_cast(row_);

    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
nbrec_address_set_unparse_addresses(struct ovsdb_idl_row *row_)
{
    struct nbrec_address_set *row = nbrec_address_set_cast(row_);
    free(row->addresses);
}

static void
nbrec_address_set_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_address_set *row = nbrec_address_set_cast(row_);
    smap_destroy(&row->external_ids);
}

static void
nbrec_address_set_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_address_set_init__(struct ovsdb_idl_row *row)
{
    nbrec_address_set_init(nbrec_address_set_cast(row));
}

/* Clears the contents of 'row' in table "Address_Set". */
void
nbrec_address_set_init(struct nbrec_address_set *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
    row->name = "";
}

/* Searches table "Address_Set" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_address_set *
nbrec_address_set_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_address_set_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_address_set, uuid));
}

/* Returns a row in table "Address_Set" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_address_set *
nbrec_address_set_first(const struct ovsdb_idl *idl)
{
    return nbrec_address_set_cast(ovsdb_idl_first_row(idl, &nbrec_table_address_set));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_address_set *
nbrec_address_set_next(const struct nbrec_address_set *row)
{
    return nbrec_address_set_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_address_set_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_address_set);
}

unsigned int nbrec_address_set_row_get_seqno(const struct nbrec_address_set *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_address_set *
nbrec_address_set_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_address_set_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_address_set));
}

const struct nbrec_address_set
*nbrec_address_set_track_get_next(const struct nbrec_address_set *row)
{
    return nbrec_address_set_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Address_Set".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_address_set_delete(const struct nbrec_address_set *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Address_Set" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_address_set *
nbrec_address_set_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_address_set_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_address_set, NULL));
}

bool
nbrec_address_set_is_updated(const struct nbrec_address_set *row, enum nbrec_address_set_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_address_set_columns[column]);
}

/* Causes the original contents of column "addresses" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "addresses" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "addresses" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "addresses" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_address_set_insert()).
 *
 *   - If "addresses" has already been modified (with
 *     nbrec_address_set_set_addresses()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_address_set_set_addresses() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_address_set_verify_addresses(const struct nbrec_address_set *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_address_set_col_addresses);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_address_set_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_address_set_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_address_set_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_address_set_verify_external_ids(const struct nbrec_address_set *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_address_set_col_external_ids);
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
 *     nbrec_address_set_insert()).
 *
 *   - If "name" has already been modified (with
 *     nbrec_address_set_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_address_set_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_address_set_verify_name(const struct nbrec_address_set *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_address_set_col_name);
}

/* Returns the "addresses" column's value from the "Address_Set" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes addresses's
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
 * directly through the "addresses" member in nbrec_address_set. */
const struct ovsdb_datum *
nbrec_address_set_get_addresses(const struct nbrec_address_set *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_address_set_col_addresses);
}

/* Returns the "external_ids" column's value from the "Address_Set" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
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
 * directly through the "external_ids" member in nbrec_address_set. */
const struct ovsdb_datum *
nbrec_address_set_get_external_ids(const struct nbrec_address_set *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_address_set_col_external_ids);
}

/* Returns the "name" column's value from the "Address_Set" table in 'row'
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
 * directly through the "name" member in nbrec_address_set. */
const struct ovsdb_datum *
nbrec_address_set_get_name(const struct nbrec_address_set *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_address_set_col_name);
}

/* Sets the "addresses" column from the "Address_Set" table in 'row' to
 * the 'addresses' set with 'n_addresses' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_address_set_set_addresses(const struct nbrec_address_set *row, const char **addresses, size_t n_addresses)
{
    struct ovsdb_datum datum;

    datum.n = n_addresses;
    datum.keys = n_addresses ? xmalloc(n_addresses * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_addresses; i++) {
        datum.keys[i].string = xstrdup(addresses[i]);
    }
    ovsdb_idl_txn_write(&row->header_, &nbrec_address_set_col_addresses, &datum);
}

/* Sets the "external_ids" column's value from the "Address_Set" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_address_set_set_external_ids(const struct nbrec_address_set *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_address_set_col_external_ids,
                        &datum);
}


/* Sets the "name" column from the "Address_Set" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_address_set_set_name(const struct nbrec_address_set *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_address_set_col_name, &datum);
}

/* Adds the value 'new_value' to the "addresses" set column from the "Address_Set" table
 * in 'row'.
 *
 */
void
nbrec_address_set_update_addresses_addvalue(const struct nbrec_address_set *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_address_set_col_addresses,
                                    datum);
}

/* Deletes the value 'delete_value' from the "addresses" set column from the
 * "Address_Set" table in 'row'.
 *
 */
void
nbrec_address_set_update_addresses_delvalue(const struct nbrec_address_set *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_address_set_col_addresses,
                                    datum);
}

/* Sets an element of the "external_ids" map column from the "Address_Set" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_address_set_update_external_ids_setkey(const struct nbrec_address_set *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_address_set_col_external_ids,
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "Address_Set" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_address_set_update_external_ids_delkey(const struct nbrec_address_set *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_address_set_col_external_ids,
                                    datum);
}

/* Sets the "addresses" column from the "Address_Set" table in 'row' to
 * the 'addresses' set with 'n_addresses' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_address_set_add_clause_addresses(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char **addresses, size_t n_addresses)
{
    struct ovsdb_datum datum;
    datum.n = n_addresses;
    datum.keys = n_addresses ? xmalloc(n_addresses * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_addresses; i++) {
        datum.keys[i].string = CONST_CAST(char *, addresses[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_address_set_col_addresses,
                          &datum);
    free(datum.keys);
}

/* Sets the "external_ids" column's value from the "Address_Set" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_address_set_add_clause_external_ids(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_address_set_col_external_ids,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_address_set_col_external_ids.type);
}


/* Sets the "name" column from the "Address_Set" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_address_set_add_clause_name(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_address_set_col_name,
                          &datum);
}

/* Destroy 'row' of kind "Address_Set". The row must have been
 * created with ovsdb_idl_index_init_row.
 */
void
nbrec_address_set_index_destroy_row(const struct nbrec_address_set *row)
{
    ovsdb_idl_index_destroy_row__(&row->header_);
}
        

/* Creates a new row of kind "Address_Set". */
struct nbrec_address_set *
nbrec_address_set_index_init_row(struct ovsdb_idl *idl, const struct ovsdb_idl_table_class *class)
{
    return (struct nbrec_address_set *) ovsdb_idl_index_init_row(idl, class);
}

/*  This function is used to compare "nbrec_address_set" records on table in iteration loops for compound-index operations.
    After been called, cursor point to current position in the index
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct "nbrec_address_set" *const_data1,  const struct "nbrec_address_set" *const_data2. Data to be compared.
    Return value: 0 if both data values are equal, -1 if first parameter is less than second and 1 otherwise. */
int
nbrec_address_set_index_compare(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_address_set *const_data1,  const struct nbrec_address_set *const_data2)
{
    struct nbrec_address_set *data1 = CONST_CAST(struct nbrec_address_set *, const_data1);
    struct nbrec_address_set *data2 = CONST_CAST(struct nbrec_address_set *, const_data2);
    return ovsdb_idl_index_compare(cursor, &data1->header_, &data2->header_);
}

/*  This function is called to position the cursor at the first row in "nbrec_address_set" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The first row in the corresponding index. */
const struct nbrec_address_set *
nbrec_address_set_index_first(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_address_set_cast(ovsdb_idl_index_first(cursor));
}

/*  This function is called to position the cursor at the next row in "nbrec_address_set" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The next row in the corresponding index. */
const struct nbrec_address_set *
nbrec_address_set_index_next(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_address_set_cast(ovsdb_idl_index_next(cursor));
}

/*  This function is used to find the data of the row in "nbrec_address_set" table that meet criteria with the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_address_set *const_data. Data to be searched.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_address_set *
nbrec_address_set_index_find(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_address_set *const_data)
{
    struct nbrec_address_set *data = CONST_CAST(struct nbrec_address_set *, const_data);
    return nbrec_address_set_cast(ovsdb_idl_index_find(cursor, &data->header_));
}

/*  This function is used to set the cursor pointing to the row in "nbrec_address_set" table that meet criteria of the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_address_set *const_data. Data to be searched.
    Return value: The row in the corresponding index closest to the criteria. */
const struct nbrec_address_set *
nbrec_address_set_index_forward_to(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_address_set *const_data)
{
    struct nbrec_address_set *data = CONST_CAST(struct nbrec_address_set *, const_data);
    return nbrec_address_set_cast(ovsdb_idl_index_forward_to(cursor, &data->header_));
}

/*  This function is used to get the data of the row in the current position pointed by the cursor in
    "nbrec_address_set" table.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_address_set *
nbrec_address_set_index_get_data(const struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_address_set_cast(ovsdb_idl_index_data(CONST_CAST(struct ovsdb_idl_index_cursor *, cursor)));
}

/* Sets the "addresses" column from the "Address_Set" table in 'row' to
 * the 'addresses' set with 'n_addresses' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_address_set_index_set_addresses(const struct nbrec_address_set *row, const char **addresses, size_t n_addresses)
{
    struct ovsdb_datum datum;
    size_t i;

    datum.n = n_addresses;
    datum.keys = n_addresses ? xmalloc(n_addresses * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_addresses; i++) {
        datum.keys[i].string = xstrdup(addresses[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_address_set_columns[ NBREC_ADDRESS_SET_COL_ADDRESSES ], &datum, &nbrec_table_classes[NBREC_TABLE_ADDRESS_SET]);
}

/* Sets the "external_ids" column's value from the "Address_Set" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_address_set_index_set_external_ids(const struct nbrec_address_set *row, const struct smap *external_ids)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(external_ids);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_address_set_columns[NBREC_ADDRESS_SET_COL_EXTERNAL_IDS],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_ADDRESS_SET]);
}


/* Sets the "name" column from the "Address_Set" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_address_set_index_set_name(const struct nbrec_address_set *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_address_set_columns[ NBREC_ADDRESS_SET_COL_NAME ], &datum, &nbrec_table_classes[NBREC_TABLE_ADDRESS_SET]);
}

struct ovsdb_idl_column nbrec_address_set_columns[NBREC_ADDRESS_SET_N_COLUMNS];

void
nbrec_address_set_set_condition(struct ovsdb_idl *idl, struct ovsdb_idl_condition *condition)
{
    ovsdb_idl_set_condition(idl, &nbrec_table_address_set, condition);
}

struct ovsdb_idl_column nbrec_address_set_columns[NBREC_ADDRESS_SET_N_COLUMNS] = {
    [NBREC_ADDRESS_SET_COL_ADDRESSES] = {
         .name = "addresses",
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
         .parse = nbrec_address_set_parse_addresses,
         .unparse = nbrec_address_set_unparse_addresses,
    },

    [NBREC_ADDRESS_SET_COL_EXTERNAL_IDS] = {
         .name = "external_ids",
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
         .parse = nbrec_address_set_parse_external_ids,
         .unparse = nbrec_address_set_unparse_external_ids,
    },

    [NBREC_ADDRESS_SET_COL_NAME] = {
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
         .parse = nbrec_address_set_parse_name,
         .unparse = nbrec_address_set_unparse_name,
    },

};

/* Connection table. */

static void
nbrec_connection_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_connection *row = nbrec_connection_cast(row_);
    smap_init(&row->external_ids);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_connection_parse_inactivity_probe(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_connection *row = nbrec_connection_cast(row_);
    size_t n = MIN(1, datum->n);
    row->inactivity_probe = NULL;
    row->n_inactivity_probe = 0;
    for (size_t i = 0; i < n; i++) {
        if (!row->n_inactivity_probe) {
            row->inactivity_probe = xmalloc(n * sizeof *row->inactivity_probe);
        }
        row->inactivity_probe[row->n_inactivity_probe] = datum->keys[i].integer;
        row->n_inactivity_probe++;
    }
}

static void
nbrec_connection_parse_is_connected(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_connection *row = nbrec_connection_cast(row_);

    if (datum->n >= 1) {
        row->is_connected = datum->keys[0].boolean;
    } else {
        row->is_connected = false;
    }
}

static void
nbrec_connection_parse_max_backoff(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_connection *row = nbrec_connection_cast(row_);
    size_t n = MIN(1, datum->n);
    row->max_backoff = NULL;
    row->n_max_backoff = 0;
    for (size_t i = 0; i < n; i++) {
        if (!row->n_max_backoff) {
            row->max_backoff = xmalloc(n * sizeof *row->max_backoff);
        }
        row->max_backoff[row->n_max_backoff] = datum->keys[i].integer;
        row->n_max_backoff++;
    }
}

static void
nbrec_connection_parse_other_config(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_connection *row = nbrec_connection_cast(row_);
    smap_init(&row->other_config);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->other_config,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_connection_parse_status(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_connection *row = nbrec_connection_cast(row_);
    smap_init(&row->status);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->status,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_connection_parse_target(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_connection *row = nbrec_connection_cast(row_);

    if (datum->n >= 1) {
        row->target = datum->keys[0].string;
    } else {
        row->target = "";
    }
}

static void
nbrec_connection_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_connection *row = nbrec_connection_cast(row_);
    smap_destroy(&row->external_ids);
}

static void
nbrec_connection_unparse_inactivity_probe(struct ovsdb_idl_row *row_)
{
    struct nbrec_connection *row = nbrec_connection_cast(row_);
    free(row->inactivity_probe);
}

static void
nbrec_connection_unparse_is_connected(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_connection_unparse_max_backoff(struct ovsdb_idl_row *row_)
{
    struct nbrec_connection *row = nbrec_connection_cast(row_);
    free(row->max_backoff);
}

static void
nbrec_connection_unparse_other_config(struct ovsdb_idl_row *row_)
{
    struct nbrec_connection *row = nbrec_connection_cast(row_);
    smap_destroy(&row->other_config);
}

static void
nbrec_connection_unparse_status(struct ovsdb_idl_row *row_)
{
    struct nbrec_connection *row = nbrec_connection_cast(row_);
    smap_destroy(&row->status);
}

static void
nbrec_connection_unparse_target(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_connection_init__(struct ovsdb_idl_row *row)
{
    nbrec_connection_init(nbrec_connection_cast(row));
}

/* Clears the contents of 'row' in table "Connection". */
void
nbrec_connection_init(struct nbrec_connection *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
    smap_init(&row->other_config);
    smap_init(&row->status);
    row->target = "";
}

/* Searches table "Connection" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_connection *
nbrec_connection_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_connection_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_connection, uuid));
}

/* Returns a row in table "Connection" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_connection *
nbrec_connection_first(const struct ovsdb_idl *idl)
{
    return nbrec_connection_cast(ovsdb_idl_first_row(idl, &nbrec_table_connection));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_connection *
nbrec_connection_next(const struct nbrec_connection *row)
{
    return nbrec_connection_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_connection_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_connection);
}

unsigned int nbrec_connection_row_get_seqno(const struct nbrec_connection *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_connection *
nbrec_connection_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_connection_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_connection));
}

const struct nbrec_connection
*nbrec_connection_track_get_next(const struct nbrec_connection *row)
{
    return nbrec_connection_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Connection".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_connection_delete(const struct nbrec_connection *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Connection" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_connection *
nbrec_connection_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_connection_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_connection, NULL));
}

bool
nbrec_connection_is_updated(const struct nbrec_connection *row, enum nbrec_connection_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_connection_columns[column]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_connection_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_connection_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_connection_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_connection_verify_external_ids(const struct nbrec_connection *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_connection_col_external_ids);
}

/* Causes the original contents of column "inactivity_probe" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "inactivity_probe" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "inactivity_probe" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "inactivity_probe" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_connection_insert()).
 *
 *   - If "inactivity_probe" has already been modified (with
 *     nbrec_connection_set_inactivity_probe()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_connection_set_inactivity_probe() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_connection_verify_inactivity_probe(const struct nbrec_connection *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_connection_col_inactivity_probe);
}

/* Causes the original contents of column "is_connected" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "is_connected" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "is_connected" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "is_connected" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_connection_insert()).
 *
 *   - If "is_connected" has already been modified (with
 *     nbrec_connection_set_is_connected()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_connection_set_is_connected() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_connection_verify_is_connected(const struct nbrec_connection *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_connection_col_is_connected);
}

/* Causes the original contents of column "max_backoff" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "max_backoff" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "max_backoff" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "max_backoff" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_connection_insert()).
 *
 *   - If "max_backoff" has already been modified (with
 *     nbrec_connection_set_max_backoff()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_connection_set_max_backoff() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_connection_verify_max_backoff(const struct nbrec_connection *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_connection_col_max_backoff);
}

/* Causes the original contents of column "other_config" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "other_config" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "other_config" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "other_config" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_connection_insert()).
 *
 *   - If "other_config" has already been modified (with
 *     nbrec_connection_set_other_config()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_connection_set_other_config() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_connection_verify_other_config(const struct nbrec_connection *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_connection_col_other_config);
}

/* Causes the original contents of column "status" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "status" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "status" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "status" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_connection_insert()).
 *
 *   - If "status" has already been modified (with
 *     nbrec_connection_set_status()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_connection_set_status() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_connection_verify_status(const struct nbrec_connection *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_connection_col_status);
}

/* Causes the original contents of column "target" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "target" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "target" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "target" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_connection_insert()).
 *
 *   - If "target" has already been modified (with
 *     nbrec_connection_set_target()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_connection_set_target() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_connection_verify_target(const struct nbrec_connection *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_connection_col_target);
}

/* Returns the "external_ids" column's value from the "Connection" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
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
 * directly through the "external_ids" member in nbrec_connection. */
const struct ovsdb_datum *
nbrec_connection_get_external_ids(const struct nbrec_connection *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_connection_col_external_ids);
}

/* Returns the "inactivity_probe" column's value from the "Connection" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes inactivity_probe's
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
 * directly through the "inactivity_probe" member in nbrec_connection. */
const struct ovsdb_datum *
nbrec_connection_get_inactivity_probe(const struct nbrec_connection *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &nbrec_connection_col_inactivity_probe);
}

/* Returns the "is_connected" column's value from the "Connection" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes is_connected's
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
 * directly through the "is_connected" member in nbrec_connection. */
const struct ovsdb_datum *
nbrec_connection_get_is_connected(const struct nbrec_connection *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &nbrec_connection_col_is_connected);
}

/* Returns the "max_backoff" column's value from the "Connection" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes max_backoff's
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
 * directly through the "max_backoff" member in nbrec_connection. */
const struct ovsdb_datum *
nbrec_connection_get_max_backoff(const struct nbrec_connection *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &nbrec_connection_col_max_backoff);
}

/* Returns the "other_config" column's value from the "Connection" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes other_config's
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
 * directly through the "other_config" member in nbrec_connection. */
const struct ovsdb_datum *
nbrec_connection_get_other_config(const struct nbrec_connection *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_connection_col_other_config);
}

/* Returns the "status" column's value from the "Connection" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes status's
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
 * directly through the "status" member in nbrec_connection. */
const struct ovsdb_datum *
nbrec_connection_get_status(const struct nbrec_connection *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_connection_col_status);
}

/* Returns the "target" column's value from the "Connection" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes target's
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
 * directly through the "target" member in nbrec_connection. */
const struct ovsdb_datum *
nbrec_connection_get_target(const struct nbrec_connection *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_connection_col_target);
}

/* Sets the "external_ids" column's value from the "Connection" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_connection_set_external_ids(const struct nbrec_connection *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_connection_col_external_ids,
                        &datum);
}


/* Sets the "inactivity_probe" column from the "Connection" table in 'row' to
 * the 'inactivity_probe' set with 'n_inactivity_probe' entries.
 *
 * 'n_inactivity_probe' may be 0 or 1; if it is 0, then 'inactivity_probe'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_connection_set_inactivity_probe(const struct nbrec_connection *row, const int64_t *inactivity_probe, size_t n_inactivity_probe)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (n_inactivity_probe) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *inactivity_probe;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_connection_col_inactivity_probe, &datum);
}

/* Sets the "is_connected" column from the "Connection" table in 'row' to
 * 'is_connected'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_connection_set_is_connected(const struct nbrec_connection *row, bool is_connected)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.boolean = is_connected;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_connection_col_is_connected, &datum);
}

/* Sets the "max_backoff" column from the "Connection" table in 'row' to
 * the 'max_backoff' set with 'n_max_backoff' entries.
 *
 * 'n_max_backoff' may be 0 or 1; if it is 0, then 'max_backoff'
 * may be NULL.
 *
 * Argument constraints: at least 1,000
 *
 * The caller retains ownership of the arguments. */
void
nbrec_connection_set_max_backoff(const struct nbrec_connection *row, const int64_t *max_backoff, size_t n_max_backoff)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (n_max_backoff) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *max_backoff;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_connection_col_max_backoff, &datum);
}

/* Sets the "other_config" column's value from the "Connection" table in 'row'
 * to 'other_config'.
 *
 * The caller retains ownership of 'other_config' and everything in it. */
void
nbrec_connection_set_other_config(const struct nbrec_connection *row, const struct smap *other_config)
{
    struct ovsdb_datum datum;

    if (other_config) {
        ovsdb_datum_from_smap(&datum, other_config);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_connection_col_other_config,
                        &datum);
}


/* Sets the "status" column's value from the "Connection" table in 'row'
 * to 'status'.
 *
 * The caller retains ownership of 'status' and everything in it. */
void
nbrec_connection_set_status(const struct nbrec_connection *row, const struct smap *status)
{
    struct ovsdb_datum datum;

    if (status) {
        ovsdb_datum_from_smap(&datum, status);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_connection_col_status,
                        &datum);
}


/* Sets the "target" column from the "Connection" table in 'row' to
 * 'target'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_connection_set_target(const struct nbrec_connection *row, const char *target)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, target);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_connection_col_target, &datum);
}

/* Sets an element of the "external_ids" map column from the "Connection" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_connection_update_external_ids_setkey(const struct nbrec_connection *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_connection_col_external_ids,
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "Connection" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_connection_update_external_ids_delkey(const struct nbrec_connection *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_connection_col_external_ids,
                                    datum);
}

/* Adds the value 'new_value' to the "inactivity_probe" set column from the "Connection" table
 * in 'row'.
 *
 */
void
nbrec_connection_update_inactivity_probe_addvalue(const struct nbrec_connection *row, int64_t new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].integer = new_value;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_connection_col_inactivity_probe,
                                    datum);
}

/* Deletes the value 'delete_value' from the "inactivity_probe" set column from the
 * "Connection" table in 'row'.
 *
 */
void
nbrec_connection_update_inactivity_probe_delvalue(const struct nbrec_connection *row, int64_t delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].integer = delete_value;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_connection_col_inactivity_probe,
                                    datum);
}

/* Adds the value 'new_value' to the "max_backoff" set column from the "Connection" table
 * in 'row'.
 *
 */
void
nbrec_connection_update_max_backoff_addvalue(const struct nbrec_connection *row, int64_t new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].integer = new_value;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_connection_col_max_backoff,
                                    datum);
}

/* Deletes the value 'delete_value' from the "max_backoff" set column from the
 * "Connection" table in 'row'.
 *
 */
void
nbrec_connection_update_max_backoff_delvalue(const struct nbrec_connection *row, int64_t delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].integer = delete_value;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_connection_col_max_backoff,
                                    datum);
}

/* Sets an element of the "other_config" map column from the "Connection" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_connection_update_other_config_setkey(const struct nbrec_connection *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_connection_col_other_config,
                                    datum);
}

/* Deletes an element of the "other_config" map column from the "Connection" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_connection_update_other_config_delkey(const struct nbrec_connection *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_connection_col_other_config,
                                    datum);
}

/* Sets an element of the "status" map column from the "Connection" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_connection_update_status_setkey(const struct nbrec_connection *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_connection_col_status,
                                    datum);
}

/* Deletes an element of the "status" map column from the "Connection" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_connection_update_status_delkey(const struct nbrec_connection *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_connection_col_status,
                                    datum);
}

/* Sets the "external_ids" column's value from the "Connection" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_connection_add_clause_external_ids(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_connection_col_external_ids,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_connection_col_external_ids.type);
}


/* Sets the "inactivity_probe" column from the "Connection" table in 'row' to
 * the 'inactivity_probe' set with 'n_inactivity_probe' entries.
 *
 * 'n_inactivity_probe' may be 0 or 1; if it is 0, then 'inactivity_probe'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_connection_add_clause_inactivity_probe(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const int64_t *inactivity_probe, size_t n_inactivity_probe)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (n_inactivity_probe) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *inactivity_probe;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_connection_col_inactivity_probe,
                          &datum);
}

/* Sets the "is_connected" column from the "Connection" table in 'row' to
 * 'is_connected'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_connection_add_clause_is_connected(struct ovsdb_idl_condition *cond, enum ovsdb_function function, bool is_connected)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.boolean = is_connected;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_connection_col_is_connected,
                          &datum);
}

/* Sets the "max_backoff" column from the "Connection" table in 'row' to
 * the 'max_backoff' set with 'n_max_backoff' entries.
 *
 * 'n_max_backoff' may be 0 or 1; if it is 0, then 'max_backoff'
 * may be NULL.
 *
 * Argument constraints: at least 1,000
 *
 * The caller retains ownership of the arguments. */
void
nbrec_connection_add_clause_max_backoff(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const int64_t *max_backoff, size_t n_max_backoff)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (n_max_backoff) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *max_backoff;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_connection_col_max_backoff,
                          &datum);
}

/* Sets the "other_config" column's value from the "Connection" table in 'row'
 * to 'other_config'.
 *
 * The caller retains ownership of 'other_config' and everything in it. */
void
nbrec_connection_add_clause_other_config(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *other_config)
{
    struct ovsdb_datum datum;

    if (other_config) {
        ovsdb_datum_from_smap(&datum, other_config);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_connection_col_other_config,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_connection_col_other_config.type);
}


/* Sets the "status" column's value from the "Connection" table in 'row'
 * to 'status'.
 *
 * The caller retains ownership of 'status' and everything in it. */
void
nbrec_connection_add_clause_status(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *status)
{
    struct ovsdb_datum datum;

    if (status) {
        ovsdb_datum_from_smap(&datum, status);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_connection_col_status,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_connection_col_status.type);
}


/* Sets the "target" column from the "Connection" table in 'row' to
 * 'target'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_connection_add_clause_target(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *target)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, target);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_connection_col_target,
                          &datum);
}

/* Destroy 'row' of kind "Connection". The row must have been
 * created with ovsdb_idl_index_init_row.
 */
void
nbrec_connection_index_destroy_row(const struct nbrec_connection *row)
{
    ovsdb_idl_index_destroy_row__(&row->header_);
}
        

/* Creates a new row of kind "Connection". */
struct nbrec_connection *
nbrec_connection_index_init_row(struct ovsdb_idl *idl, const struct ovsdb_idl_table_class *class)
{
    return (struct nbrec_connection *) ovsdb_idl_index_init_row(idl, class);
}

/*  This function is used to compare "nbrec_connection" records on table in iteration loops for compound-index operations.
    After been called, cursor point to current position in the index
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct "nbrec_connection" *const_data1,  const struct "nbrec_connection" *const_data2. Data to be compared.
    Return value: 0 if both data values are equal, -1 if first parameter is less than second and 1 otherwise. */
int
nbrec_connection_index_compare(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_connection *const_data1,  const struct nbrec_connection *const_data2)
{
    struct nbrec_connection *data1 = CONST_CAST(struct nbrec_connection *, const_data1);
    struct nbrec_connection *data2 = CONST_CAST(struct nbrec_connection *, const_data2);
    return ovsdb_idl_index_compare(cursor, &data1->header_, &data2->header_);
}

/*  This function is called to position the cursor at the first row in "nbrec_connection" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The first row in the corresponding index. */
const struct nbrec_connection *
nbrec_connection_index_first(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_connection_cast(ovsdb_idl_index_first(cursor));
}

/*  This function is called to position the cursor at the next row in "nbrec_connection" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The next row in the corresponding index. */
const struct nbrec_connection *
nbrec_connection_index_next(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_connection_cast(ovsdb_idl_index_next(cursor));
}

/*  This function is used to find the data of the row in "nbrec_connection" table that meet criteria with the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_connection *const_data. Data to be searched.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_connection *
nbrec_connection_index_find(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_connection *const_data)
{
    struct nbrec_connection *data = CONST_CAST(struct nbrec_connection *, const_data);
    return nbrec_connection_cast(ovsdb_idl_index_find(cursor, &data->header_));
}

/*  This function is used to set the cursor pointing to the row in "nbrec_connection" table that meet criteria of the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_connection *const_data. Data to be searched.
    Return value: The row in the corresponding index closest to the criteria. */
const struct nbrec_connection *
nbrec_connection_index_forward_to(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_connection *const_data)
{
    struct nbrec_connection *data = CONST_CAST(struct nbrec_connection *, const_data);
    return nbrec_connection_cast(ovsdb_idl_index_forward_to(cursor, &data->header_));
}

/*  This function is used to get the data of the row in the current position pointed by the cursor in
    "nbrec_connection" table.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_connection *
nbrec_connection_index_get_data(const struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_connection_cast(ovsdb_idl_index_data(CONST_CAST(struct ovsdb_idl_index_cursor *, cursor)));
}

/* Sets the "external_ids" column's value from the "Connection" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_connection_index_set_external_ids(const struct nbrec_connection *row, const struct smap *external_ids)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(external_ids);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_connection_columns[NBREC_CONNECTION_COL_EXTERNAL_IDS],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_CONNECTION]);
}


/* Sets the "inactivity_probe" column from the "Connection" table in 'row' to
 * the 'inactivity_probe' set with 'n_inactivity_probe' entries.
 *
 * 'n_inactivity_probe' may be 0 or 1; if it is 0, then 'inactivity_probe'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_connection_index_set_inactivity_probe(const struct nbrec_connection *row, const int64_t *inactivity_probe, size_t n_inactivity_probe)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    if (n_inactivity_probe) {
        datum.n = 1;
        datum.keys = key;
        key->integer = *inactivity_probe;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_connection_columns[ NBREC_CONNECTION_COL_INACTIVITY_PROBE ], &datum, &nbrec_table_classes[NBREC_TABLE_CONNECTION]);
}

/* Sets the "is_connected" column from the "Connection" table in 'row' to
 * 'is_connected'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_connection_index_set_is_connected(const struct nbrec_connection *row, bool is_connected)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->boolean = is_connected;
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_connection_columns[ NBREC_CONNECTION_COL_IS_CONNECTED ], &datum, &nbrec_table_classes[NBREC_TABLE_CONNECTION]);
}

/* Sets the "max_backoff" column from the "Connection" table in 'row' to
 * the 'max_backoff' set with 'n_max_backoff' entries.
 *
 * 'n_max_backoff' may be 0 or 1; if it is 0, then 'max_backoff'
 * may be NULL.
 *
 * Argument constraints: at least 1,000
 *
 * The caller retains ownership of the arguments. */
void
nbrec_connection_index_set_max_backoff(const struct nbrec_connection *row, const int64_t *max_backoff, size_t n_max_backoff)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    if (n_max_backoff) {
        datum.n = 1;
        datum.keys = key;
        key->integer = *max_backoff;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_connection_columns[ NBREC_CONNECTION_COL_MAX_BACKOFF ], &datum, &nbrec_table_classes[NBREC_TABLE_CONNECTION]);
}

/* Sets the "other_config" column's value from the "Connection" table in 'row'
 * to 'other_config'.
 *
 * The caller retains ownership of 'other_config' and everything in it. */
void
nbrec_connection_index_set_other_config(const struct nbrec_connection *row, const struct smap *other_config)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (other_config) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(other_config);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, other_config) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_connection_columns[NBREC_CONNECTION_COL_OTHER_CONFIG],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_CONNECTION]);
}


/* Sets the "status" column's value from the "Connection" table in 'row'
 * to 'status'.
 *
 * The caller retains ownership of 'status' and everything in it. */
void
nbrec_connection_index_set_status(const struct nbrec_connection *row, const struct smap *status)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (status) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(status);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, status) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_connection_columns[NBREC_CONNECTION_COL_STATUS],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_CONNECTION]);
}


/* Sets the "target" column from the "Connection" table in 'row' to
 * 'target'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_connection_index_set_target(const struct nbrec_connection *row, const char *target)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, target);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_connection_columns[ NBREC_CONNECTION_COL_TARGET ], &datum, &nbrec_table_classes[NBREC_TABLE_CONNECTION]);
}

struct ovsdb_idl_column nbrec_connection_columns[NBREC_CONNECTION_N_COLUMNS];

void
nbrec_connection_set_condition(struct ovsdb_idl *idl, struct ovsdb_idl_condition *condition)
{
    ovsdb_idl_set_condition(idl, &nbrec_table_connection, condition);
}

struct ovsdb_idl_column nbrec_connection_columns[NBREC_CONNECTION_N_COLUMNS] = {
    [NBREC_CONNECTION_COL_EXTERNAL_IDS] = {
         .name = "external_ids",
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
         .parse = nbrec_connection_parse_external_ids,
         .unparse = nbrec_connection_unparse_external_ids,
    },

    [NBREC_CONNECTION_COL_INACTIVITY_PROBE] = {
         .name = "inactivity_probe",
         .type = {
            .key = {
               .type = OVSDB_TYPE_INTEGER,
               .u.integer = { .min = INT64_MIN, .max = INT64_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_connection_parse_inactivity_probe,
         .unparse = nbrec_connection_unparse_inactivity_probe,
    },

    [NBREC_CONNECTION_COL_IS_CONNECTED] = {
         .name = "is_connected",
         .type = {
            .key = {
               .type = OVSDB_TYPE_BOOLEAN,
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 1,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_connection_parse_is_connected,
         .unparse = nbrec_connection_unparse_is_connected,
    },

    [NBREC_CONNECTION_COL_MAX_BACKOFF] = {
         .name = "max_backoff",
         .type = {
            .key = {
               .type = OVSDB_TYPE_INTEGER,
               .u.integer = { .min = INT64_C(1000), .max = INT64_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_connection_parse_max_backoff,
         .unparse = nbrec_connection_unparse_max_backoff,
    },

    [NBREC_CONNECTION_COL_OTHER_CONFIG] = {
         .name = "other_config",
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
         .parse = nbrec_connection_parse_other_config,
         .unparse = nbrec_connection_unparse_other_config,
    },

    [NBREC_CONNECTION_COL_STATUS] = {
         .name = "status",
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
         .parse = nbrec_connection_parse_status,
         .unparse = nbrec_connection_unparse_status,
    },

    [NBREC_CONNECTION_COL_TARGET] = {
         .name = "target",
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
         .parse = nbrec_connection_parse_target,
         .unparse = nbrec_connection_unparse_target,
    },

};

/* DHCP_Options table. */

static void
nbrec_dhcp_options_parse_cidr(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_dhcp_options *row = nbrec_dhcp_options_cast(row_);

    if (datum->n >= 1) {
        row->cidr = datum->keys[0].string;
    } else {
        row->cidr = "";
    }
}

static void
nbrec_dhcp_options_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_dhcp_options *row = nbrec_dhcp_options_cast(row_);
    smap_init(&row->external_ids);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_dhcp_options_parse_options(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_dhcp_options *row = nbrec_dhcp_options_cast(row_);
    smap_init(&row->options);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->options,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_dhcp_options_unparse_cidr(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_dhcp_options_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_dhcp_options *row = nbrec_dhcp_options_cast(row_);
    smap_destroy(&row->external_ids);
}

static void
nbrec_dhcp_options_unparse_options(struct ovsdb_idl_row *row_)
{
    struct nbrec_dhcp_options *row = nbrec_dhcp_options_cast(row_);
    smap_destroy(&row->options);
}

static void
nbrec_dhcp_options_init__(struct ovsdb_idl_row *row)
{
    nbrec_dhcp_options_init(nbrec_dhcp_options_cast(row));
}

/* Clears the contents of 'row' in table "DHCP_Options". */
void
nbrec_dhcp_options_init(struct nbrec_dhcp_options *row)
{
    memset(row, 0, sizeof *row); 
    row->cidr = "";
    smap_init(&row->external_ids);
    smap_init(&row->options);
}

/* Searches table "DHCP_Options" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_dhcp_options *
nbrec_dhcp_options_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_dhcp_options_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_dhcp_options, uuid));
}

/* Returns a row in table "DHCP_Options" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_dhcp_options *
nbrec_dhcp_options_first(const struct ovsdb_idl *idl)
{
    return nbrec_dhcp_options_cast(ovsdb_idl_first_row(idl, &nbrec_table_dhcp_options));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_dhcp_options *
nbrec_dhcp_options_next(const struct nbrec_dhcp_options *row)
{
    return nbrec_dhcp_options_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_dhcp_options_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_dhcp_options);
}

unsigned int nbrec_dhcp_options_row_get_seqno(const struct nbrec_dhcp_options *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_dhcp_options *
nbrec_dhcp_options_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_dhcp_options_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_dhcp_options));
}

const struct nbrec_dhcp_options
*nbrec_dhcp_options_track_get_next(const struct nbrec_dhcp_options *row)
{
    return nbrec_dhcp_options_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "DHCP_Options".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_dhcp_options_delete(const struct nbrec_dhcp_options *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "DHCP_Options" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_dhcp_options *
nbrec_dhcp_options_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_dhcp_options_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_dhcp_options, NULL));
}

bool
nbrec_dhcp_options_is_updated(const struct nbrec_dhcp_options *row, enum nbrec_dhcp_options_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_dhcp_options_columns[column]);
}

/* Causes the original contents of column "cidr" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "cidr" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "cidr" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "cidr" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_dhcp_options_insert()).
 *
 *   - If "cidr" has already been modified (with
 *     nbrec_dhcp_options_set_cidr()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_dhcp_options_set_cidr() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_dhcp_options_verify_cidr(const struct nbrec_dhcp_options *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_dhcp_options_col_cidr);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_dhcp_options_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_dhcp_options_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_dhcp_options_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_dhcp_options_verify_external_ids(const struct nbrec_dhcp_options *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_dhcp_options_col_external_ids);
}

/* Causes the original contents of column "options" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "options" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "options" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "options" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_dhcp_options_insert()).
 *
 *   - If "options" has already been modified (with
 *     nbrec_dhcp_options_set_options()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_dhcp_options_set_options() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_dhcp_options_verify_options(const struct nbrec_dhcp_options *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_dhcp_options_col_options);
}

/* Returns the "cidr" column's value from the "DHCP_Options" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes cidr's
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
 * directly through the "cidr" member in nbrec_dhcp_options. */
const struct ovsdb_datum *
nbrec_dhcp_options_get_cidr(const struct nbrec_dhcp_options *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_dhcp_options_col_cidr);
}

/* Returns the "external_ids" column's value from the "DHCP_Options" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
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
 * directly through the "external_ids" member in nbrec_dhcp_options. */
const struct ovsdb_datum *
nbrec_dhcp_options_get_external_ids(const struct nbrec_dhcp_options *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_dhcp_options_col_external_ids);
}

/* Returns the "options" column's value from the "DHCP_Options" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes options's
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
 * directly through the "options" member in nbrec_dhcp_options. */
const struct ovsdb_datum *
nbrec_dhcp_options_get_options(const struct nbrec_dhcp_options *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_dhcp_options_col_options);
}

/* Sets the "cidr" column from the "DHCP_Options" table in 'row' to
 * 'cidr'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_dhcp_options_set_cidr(const struct nbrec_dhcp_options *row, const char *cidr)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, cidr);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_dhcp_options_col_cidr, &datum);
}

/* Sets the "external_ids" column's value from the "DHCP_Options" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_dhcp_options_set_external_ids(const struct nbrec_dhcp_options *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_dhcp_options_col_external_ids,
                        &datum);
}


/* Sets the "options" column's value from the "DHCP_Options" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_dhcp_options_set_options(const struct nbrec_dhcp_options *row, const struct smap *options)
{
    struct ovsdb_datum datum;

    if (options) {
        ovsdb_datum_from_smap(&datum, options);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_dhcp_options_col_options,
                        &datum);
}


/* Sets an element of the "external_ids" map column from the "DHCP_Options" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_dhcp_options_update_external_ids_setkey(const struct nbrec_dhcp_options *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_dhcp_options_col_external_ids,
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "DHCP_Options" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_dhcp_options_update_external_ids_delkey(const struct nbrec_dhcp_options *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_dhcp_options_col_external_ids,
                                    datum);
}

/* Sets an element of the "options" map column from the "DHCP_Options" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_dhcp_options_update_options_setkey(const struct nbrec_dhcp_options *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_dhcp_options_col_options,
                                    datum);
}

/* Deletes an element of the "options" map column from the "DHCP_Options" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_dhcp_options_update_options_delkey(const struct nbrec_dhcp_options *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_dhcp_options_col_options,
                                    datum);
}

/* Sets the "cidr" column from the "DHCP_Options" table in 'row' to
 * 'cidr'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_dhcp_options_add_clause_cidr(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *cidr)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, cidr);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_dhcp_options_col_cidr,
                          &datum);
}

/* Sets the "external_ids" column's value from the "DHCP_Options" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_dhcp_options_add_clause_external_ids(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_dhcp_options_col_external_ids,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_dhcp_options_col_external_ids.type);
}


/* Sets the "options" column's value from the "DHCP_Options" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_dhcp_options_add_clause_options(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *options)
{
    struct ovsdb_datum datum;

    if (options) {
        ovsdb_datum_from_smap(&datum, options);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_dhcp_options_col_options,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_dhcp_options_col_options.type);
}


/* Destroy 'row' of kind "DHCP_Options". The row must have been
 * created with ovsdb_idl_index_init_row.
 */
void
nbrec_dhcp_options_index_destroy_row(const struct nbrec_dhcp_options *row)
{
    ovsdb_idl_index_destroy_row__(&row->header_);
}
        

/* Creates a new row of kind "DHCP_Options". */
struct nbrec_dhcp_options *
nbrec_dhcp_options_index_init_row(struct ovsdb_idl *idl, const struct ovsdb_idl_table_class *class)
{
    return (struct nbrec_dhcp_options *) ovsdb_idl_index_init_row(idl, class);
}

/*  This function is used to compare "nbrec_dhcp_options" records on table in iteration loops for compound-index operations.
    After been called, cursor point to current position in the index
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct "nbrec_dhcp_options" *const_data1,  const struct "nbrec_dhcp_options" *const_data2. Data to be compared.
    Return value: 0 if both data values are equal, -1 if first parameter is less than second and 1 otherwise. */
int
nbrec_dhcp_options_index_compare(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_dhcp_options *const_data1,  const struct nbrec_dhcp_options *const_data2)
{
    struct nbrec_dhcp_options *data1 = CONST_CAST(struct nbrec_dhcp_options *, const_data1);
    struct nbrec_dhcp_options *data2 = CONST_CAST(struct nbrec_dhcp_options *, const_data2);
    return ovsdb_idl_index_compare(cursor, &data1->header_, &data2->header_);
}

/*  This function is called to position the cursor at the first row in "nbrec_dhcp_options" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The first row in the corresponding index. */
const struct nbrec_dhcp_options *
nbrec_dhcp_options_index_first(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_dhcp_options_cast(ovsdb_idl_index_first(cursor));
}

/*  This function is called to position the cursor at the next row in "nbrec_dhcp_options" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The next row in the corresponding index. */
const struct nbrec_dhcp_options *
nbrec_dhcp_options_index_next(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_dhcp_options_cast(ovsdb_idl_index_next(cursor));
}

/*  This function is used to find the data of the row in "nbrec_dhcp_options" table that meet criteria with the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_dhcp_options *const_data. Data to be searched.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_dhcp_options *
nbrec_dhcp_options_index_find(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_dhcp_options *const_data)
{
    struct nbrec_dhcp_options *data = CONST_CAST(struct nbrec_dhcp_options *, const_data);
    return nbrec_dhcp_options_cast(ovsdb_idl_index_find(cursor, &data->header_));
}

/*  This function is used to set the cursor pointing to the row in "nbrec_dhcp_options" table that meet criteria of the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_dhcp_options *const_data. Data to be searched.
    Return value: The row in the corresponding index closest to the criteria. */
const struct nbrec_dhcp_options *
nbrec_dhcp_options_index_forward_to(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_dhcp_options *const_data)
{
    struct nbrec_dhcp_options *data = CONST_CAST(struct nbrec_dhcp_options *, const_data);
    return nbrec_dhcp_options_cast(ovsdb_idl_index_forward_to(cursor, &data->header_));
}

/*  This function is used to get the data of the row in the current position pointed by the cursor in
    "nbrec_dhcp_options" table.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_dhcp_options *
nbrec_dhcp_options_index_get_data(const struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_dhcp_options_cast(ovsdb_idl_index_data(CONST_CAST(struct ovsdb_idl_index_cursor *, cursor)));
}

/* Sets the "cidr" column from the "DHCP_Options" table in 'row' to
 * 'cidr'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_dhcp_options_index_set_cidr(const struct nbrec_dhcp_options *row, const char *cidr)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, cidr);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_dhcp_options_columns[ NBREC_DHCP_OPTIONS_COL_CIDR ], &datum, &nbrec_table_classes[NBREC_TABLE_DHCP_OPTIONS]);
}

/* Sets the "external_ids" column's value from the "DHCP_Options" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_dhcp_options_index_set_external_ids(const struct nbrec_dhcp_options *row, const struct smap *external_ids)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(external_ids);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_EXTERNAL_IDS],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_DHCP_OPTIONS]);
}


/* Sets the "options" column's value from the "DHCP_Options" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_dhcp_options_index_set_options(const struct nbrec_dhcp_options *row, const struct smap *options)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (options) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(options);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, options) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_OPTIONS],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_DHCP_OPTIONS]);
}


struct ovsdb_idl_column nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_N_COLUMNS];

void
nbrec_dhcp_options_set_condition(struct ovsdb_idl *idl, struct ovsdb_idl_condition *condition)
{
    ovsdb_idl_set_condition(idl, &nbrec_table_dhcp_options, condition);
}

struct ovsdb_idl_column nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_N_COLUMNS] = {
    [NBREC_DHCP_OPTIONS_COL_CIDR] = {
         .name = "cidr",
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
         .parse = nbrec_dhcp_options_parse_cidr,
         .unparse = nbrec_dhcp_options_unparse_cidr,
    },

    [NBREC_DHCP_OPTIONS_COL_EXTERNAL_IDS] = {
         .name = "external_ids",
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
         .parse = nbrec_dhcp_options_parse_external_ids,
         .unparse = nbrec_dhcp_options_unparse_external_ids,
    },

    [NBREC_DHCP_OPTIONS_COL_OPTIONS] = {
         .name = "options",
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
         .parse = nbrec_dhcp_options_parse_options,
         .unparse = nbrec_dhcp_options_unparse_options,
    },

};

/* DNS table. */

static void
nbrec_dns_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_dns *row = nbrec_dns_cast(row_);
    smap_init(&row->external_ids);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_dns_parse_records(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_dns *row = nbrec_dns_cast(row_);
    smap_init(&row->records);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->records,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_dns_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_dns *row = nbrec_dns_cast(row_);
    smap_destroy(&row->external_ids);
}

static void
nbrec_dns_unparse_records(struct ovsdb_idl_row *row_)
{
    struct nbrec_dns *row = nbrec_dns_cast(row_);
    smap_destroy(&row->records);
}

static void
nbrec_dns_init__(struct ovsdb_idl_row *row)
{
    nbrec_dns_init(nbrec_dns_cast(row));
}

/* Clears the contents of 'row' in table "DNS". */
void
nbrec_dns_init(struct nbrec_dns *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
    smap_init(&row->records);
}

/* Searches table "DNS" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_dns *
nbrec_dns_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_dns_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_dns, uuid));
}

/* Returns a row in table "DNS" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_dns *
nbrec_dns_first(const struct ovsdb_idl *idl)
{
    return nbrec_dns_cast(ovsdb_idl_first_row(idl, &nbrec_table_dns));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_dns *
nbrec_dns_next(const struct nbrec_dns *row)
{
    return nbrec_dns_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_dns_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_dns);
}

unsigned int nbrec_dns_row_get_seqno(const struct nbrec_dns *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_dns *
nbrec_dns_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_dns_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_dns));
}

const struct nbrec_dns
*nbrec_dns_track_get_next(const struct nbrec_dns *row)
{
    return nbrec_dns_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "DNS".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_dns_delete(const struct nbrec_dns *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "DNS" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_dns *
nbrec_dns_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_dns_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_dns, NULL));
}

bool
nbrec_dns_is_updated(const struct nbrec_dns *row, enum nbrec_dns_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_dns_columns[column]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_dns_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_dns_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_dns_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_dns_verify_external_ids(const struct nbrec_dns *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_dns_col_external_ids);
}

/* Causes the original contents of column "records" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "records" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "records" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "records" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_dns_insert()).
 *
 *   - If "records" has already been modified (with
 *     nbrec_dns_set_records()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_dns_set_records() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_dns_verify_records(const struct nbrec_dns *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_dns_col_records);
}

/* Returns the "external_ids" column's value from the "DNS" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
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
 * directly through the "external_ids" member in nbrec_dns. */
const struct ovsdb_datum *
nbrec_dns_get_external_ids(const struct nbrec_dns *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_dns_col_external_ids);
}

/* Returns the "records" column's value from the "DNS" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes records's
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
 * directly through the "records" member in nbrec_dns. */
const struct ovsdb_datum *
nbrec_dns_get_records(const struct nbrec_dns *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_dns_col_records);
}

/* Sets the "external_ids" column's value from the "DNS" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_dns_set_external_ids(const struct nbrec_dns *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_dns_col_external_ids,
                        &datum);
}


/* Sets the "records" column's value from the "DNS" table in 'row'
 * to 'records'.
 *
 * The caller retains ownership of 'records' and everything in it. */
void
nbrec_dns_set_records(const struct nbrec_dns *row, const struct smap *records)
{
    struct ovsdb_datum datum;

    if (records) {
        ovsdb_datum_from_smap(&datum, records);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_dns_col_records,
                        &datum);
}


/* Sets an element of the "external_ids" map column from the "DNS" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_dns_update_external_ids_setkey(const struct nbrec_dns *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_dns_col_external_ids,
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "DNS" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_dns_update_external_ids_delkey(const struct nbrec_dns *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_dns_col_external_ids,
                                    datum);
}

/* Sets an element of the "records" map column from the "DNS" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_dns_update_records_setkey(const struct nbrec_dns *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_dns_col_records,
                                    datum);
}

/* Deletes an element of the "records" map column from the "DNS" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_dns_update_records_delkey(const struct nbrec_dns *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_dns_col_records,
                                    datum);
}

/* Sets the "external_ids" column's value from the "DNS" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_dns_add_clause_external_ids(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_dns_col_external_ids,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_dns_col_external_ids.type);
}


/* Sets the "records" column's value from the "DNS" table in 'row'
 * to 'records'.
 *
 * The caller retains ownership of 'records' and everything in it. */
void
nbrec_dns_add_clause_records(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *records)
{
    struct ovsdb_datum datum;

    if (records) {
        ovsdb_datum_from_smap(&datum, records);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_dns_col_records,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_dns_col_records.type);
}


/* Destroy 'row' of kind "DNS". The row must have been
 * created with ovsdb_idl_index_init_row.
 */
void
nbrec_dns_index_destroy_row(const struct nbrec_dns *row)
{
    ovsdb_idl_index_destroy_row__(&row->header_);
}
        

/* Creates a new row of kind "DNS". */
struct nbrec_dns *
nbrec_dns_index_init_row(struct ovsdb_idl *idl, const struct ovsdb_idl_table_class *class)
{
    return (struct nbrec_dns *) ovsdb_idl_index_init_row(idl, class);
}

/*  This function is used to compare "nbrec_dns" records on table in iteration loops for compound-index operations.
    After been called, cursor point to current position in the index
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct "nbrec_dns" *const_data1,  const struct "nbrec_dns" *const_data2. Data to be compared.
    Return value: 0 if both data values are equal, -1 if first parameter is less than second and 1 otherwise. */
int
nbrec_dns_index_compare(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_dns *const_data1,  const struct nbrec_dns *const_data2)
{
    struct nbrec_dns *data1 = CONST_CAST(struct nbrec_dns *, const_data1);
    struct nbrec_dns *data2 = CONST_CAST(struct nbrec_dns *, const_data2);
    return ovsdb_idl_index_compare(cursor, &data1->header_, &data2->header_);
}

/*  This function is called to position the cursor at the first row in "nbrec_dns" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The first row in the corresponding index. */
const struct nbrec_dns *
nbrec_dns_index_first(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_dns_cast(ovsdb_idl_index_first(cursor));
}

/*  This function is called to position the cursor at the next row in "nbrec_dns" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The next row in the corresponding index. */
const struct nbrec_dns *
nbrec_dns_index_next(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_dns_cast(ovsdb_idl_index_next(cursor));
}

/*  This function is used to find the data of the row in "nbrec_dns" table that meet criteria with the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_dns *const_data. Data to be searched.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_dns *
nbrec_dns_index_find(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_dns *const_data)
{
    struct nbrec_dns *data = CONST_CAST(struct nbrec_dns *, const_data);
    return nbrec_dns_cast(ovsdb_idl_index_find(cursor, &data->header_));
}

/*  This function is used to set the cursor pointing to the row in "nbrec_dns" table that meet criteria of the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_dns *const_data. Data to be searched.
    Return value: The row in the corresponding index closest to the criteria. */
const struct nbrec_dns *
nbrec_dns_index_forward_to(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_dns *const_data)
{
    struct nbrec_dns *data = CONST_CAST(struct nbrec_dns *, const_data);
    return nbrec_dns_cast(ovsdb_idl_index_forward_to(cursor, &data->header_));
}

/*  This function is used to get the data of the row in the current position pointed by the cursor in
    "nbrec_dns" table.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_dns *
nbrec_dns_index_get_data(const struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_dns_cast(ovsdb_idl_index_data(CONST_CAST(struct ovsdb_idl_index_cursor *, cursor)));
}

/* Sets the "external_ids" column's value from the "DNS" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_dns_index_set_external_ids(const struct nbrec_dns *row, const struct smap *external_ids)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(external_ids);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_dns_columns[NBREC_DNS_COL_EXTERNAL_IDS],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_DNS]);
}


/* Sets the "records" column's value from the "DNS" table in 'row'
 * to 'records'.
 *
 * The caller retains ownership of 'records' and everything in it. */
void
nbrec_dns_index_set_records(const struct nbrec_dns *row, const struct smap *records)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (records) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(records);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, records) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_dns_columns[NBREC_DNS_COL_RECORDS],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_DNS]);
}


struct ovsdb_idl_column nbrec_dns_columns[NBREC_DNS_N_COLUMNS];

void
nbrec_dns_set_condition(struct ovsdb_idl *idl, struct ovsdb_idl_condition *condition)
{
    ovsdb_idl_set_condition(idl, &nbrec_table_dns, condition);
}

struct ovsdb_idl_column nbrec_dns_columns[NBREC_DNS_N_COLUMNS] = {
    [NBREC_DNS_COL_EXTERNAL_IDS] = {
         .name = "external_ids",
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
         .parse = nbrec_dns_parse_external_ids,
         .unparse = nbrec_dns_unparse_external_ids,
    },

    [NBREC_DNS_COL_RECORDS] = {
         .name = "records",
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
         .parse = nbrec_dns_parse_records,
         .unparse = nbrec_dns_unparse_records,
    },

};

/* Gateway_Chassis table. */

static void
nbrec_gateway_chassis_parse_chassis_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_gateway_chassis *row = nbrec_gateway_chassis_cast(row_);

    if (datum->n >= 1) {
        row->chassis_name = datum->keys[0].string;
    } else {
        row->chassis_name = "";
    }
}

static void
nbrec_gateway_chassis_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_gateway_chassis *row = nbrec_gateway_chassis_cast(row_);
    smap_init(&row->external_ids);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_gateway_chassis_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_gateway_chassis *row = nbrec_gateway_chassis_cast(row_);

    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
nbrec_gateway_chassis_parse_options(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_gateway_chassis *row = nbrec_gateway_chassis_cast(row_);
    smap_init(&row->options);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->options,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_gateway_chassis_parse_priority(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_gateway_chassis *row = nbrec_gateway_chassis_cast(row_);

    if (datum->n >= 1) {
        row->priority = datum->keys[0].integer;
    } else {
        row->priority = 0;
    }
}

static void
nbrec_gateway_chassis_unparse_chassis_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_gateway_chassis_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_gateway_chassis *row = nbrec_gateway_chassis_cast(row_);
    smap_destroy(&row->external_ids);
}

static void
nbrec_gateway_chassis_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_gateway_chassis_unparse_options(struct ovsdb_idl_row *row_)
{
    struct nbrec_gateway_chassis *row = nbrec_gateway_chassis_cast(row_);
    smap_destroy(&row->options);
}

static void
nbrec_gateway_chassis_unparse_priority(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_gateway_chassis_init__(struct ovsdb_idl_row *row)
{
    nbrec_gateway_chassis_init(nbrec_gateway_chassis_cast(row));
}

/* Clears the contents of 'row' in table "Gateway_Chassis". */
void
nbrec_gateway_chassis_init(struct nbrec_gateway_chassis *row)
{
    memset(row, 0, sizeof *row); 
    row->chassis_name = "";
    smap_init(&row->external_ids);
    row->name = "";
    smap_init(&row->options);
}

/* Searches table "Gateway_Chassis" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_gateway_chassis *
nbrec_gateway_chassis_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_gateway_chassis_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_gateway_chassis, uuid));
}

/* Returns a row in table "Gateway_Chassis" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_gateway_chassis *
nbrec_gateway_chassis_first(const struct ovsdb_idl *idl)
{
    return nbrec_gateway_chassis_cast(ovsdb_idl_first_row(idl, &nbrec_table_gateway_chassis));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_gateway_chassis *
nbrec_gateway_chassis_next(const struct nbrec_gateway_chassis *row)
{
    return nbrec_gateway_chassis_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_gateway_chassis_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_gateway_chassis);
}

unsigned int nbrec_gateway_chassis_row_get_seqno(const struct nbrec_gateway_chassis *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_gateway_chassis *
nbrec_gateway_chassis_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_gateway_chassis_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_gateway_chassis));
}

const struct nbrec_gateway_chassis
*nbrec_gateway_chassis_track_get_next(const struct nbrec_gateway_chassis *row)
{
    return nbrec_gateway_chassis_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Gateway_Chassis".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_gateway_chassis_delete(const struct nbrec_gateway_chassis *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Gateway_Chassis" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_gateway_chassis *
nbrec_gateway_chassis_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_gateway_chassis_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_gateway_chassis, NULL));
}

bool
nbrec_gateway_chassis_is_updated(const struct nbrec_gateway_chassis *row, enum nbrec_gateway_chassis_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_gateway_chassis_columns[column]);
}

/* Causes the original contents of column "chassis_name" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "chassis_name" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "chassis_name" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "chassis_name" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_gateway_chassis_insert()).
 *
 *   - If "chassis_name" has already been modified (with
 *     nbrec_gateway_chassis_set_chassis_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_gateway_chassis_set_chassis_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_gateway_chassis_verify_chassis_name(const struct nbrec_gateway_chassis *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_gateway_chassis_col_chassis_name);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_gateway_chassis_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_gateway_chassis_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_gateway_chassis_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_gateway_chassis_verify_external_ids(const struct nbrec_gateway_chassis *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_gateway_chassis_col_external_ids);
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
 *     nbrec_gateway_chassis_insert()).
 *
 *   - If "name" has already been modified (with
 *     nbrec_gateway_chassis_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_gateway_chassis_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_gateway_chassis_verify_name(const struct nbrec_gateway_chassis *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_gateway_chassis_col_name);
}

/* Causes the original contents of column "options" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "options" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "options" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "options" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_gateway_chassis_insert()).
 *
 *   - If "options" has already been modified (with
 *     nbrec_gateway_chassis_set_options()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_gateway_chassis_set_options() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_gateway_chassis_verify_options(const struct nbrec_gateway_chassis *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_gateway_chassis_col_options);
}

/* Causes the original contents of column "priority" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "priority" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "priority" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "priority" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_gateway_chassis_insert()).
 *
 *   - If "priority" has already been modified (with
 *     nbrec_gateway_chassis_set_priority()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_gateway_chassis_set_priority() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_gateway_chassis_verify_priority(const struct nbrec_gateway_chassis *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_gateway_chassis_col_priority);
}

/* Returns the "chassis_name" column's value from the "Gateway_Chassis" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes chassis_name's
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
 * directly through the "chassis_name" member in nbrec_gateway_chassis. */
const struct ovsdb_datum *
nbrec_gateway_chassis_get_chassis_name(const struct nbrec_gateway_chassis *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_gateway_chassis_col_chassis_name);
}

/* Returns the "external_ids" column's value from the "Gateway_Chassis" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
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
 * directly through the "external_ids" member in nbrec_gateway_chassis. */
const struct ovsdb_datum *
nbrec_gateway_chassis_get_external_ids(const struct nbrec_gateway_chassis *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_gateway_chassis_col_external_ids);
}

/* Returns the "name" column's value from the "Gateway_Chassis" table in 'row'
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
 * directly through the "name" member in nbrec_gateway_chassis. */
const struct ovsdb_datum *
nbrec_gateway_chassis_get_name(const struct nbrec_gateway_chassis *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_gateway_chassis_col_name);
}

/* Returns the "options" column's value from the "Gateway_Chassis" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes options's
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
 * directly through the "options" member in nbrec_gateway_chassis. */
const struct ovsdb_datum *
nbrec_gateway_chassis_get_options(const struct nbrec_gateway_chassis *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_gateway_chassis_col_options);
}

/* Returns the "priority" column's value from the "Gateway_Chassis" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes priority's
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
 * directly through the "priority" member in nbrec_gateway_chassis. */
const struct ovsdb_datum *
nbrec_gateway_chassis_get_priority(const struct nbrec_gateway_chassis *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &nbrec_gateway_chassis_col_priority);
}

/* Sets the "chassis_name" column from the "Gateway_Chassis" table in 'row' to
 * 'chassis_name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_gateway_chassis_set_chassis_name(const struct nbrec_gateway_chassis *row, const char *chassis_name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, chassis_name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_gateway_chassis_col_chassis_name, &datum);
}

/* Sets the "external_ids" column's value from the "Gateway_Chassis" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_gateway_chassis_set_external_ids(const struct nbrec_gateway_chassis *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_gateway_chassis_col_external_ids,
                        &datum);
}


/* Sets the "name" column from the "Gateway_Chassis" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_gateway_chassis_set_name(const struct nbrec_gateway_chassis *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_gateway_chassis_col_name, &datum);
}

/* Sets the "options" column's value from the "Gateway_Chassis" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_gateway_chassis_set_options(const struct nbrec_gateway_chassis *row, const struct smap *options)
{
    struct ovsdb_datum datum;

    if (options) {
        ovsdb_datum_from_smap(&datum, options);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_gateway_chassis_col_options,
                        &datum);
}


/* Sets the "priority" column from the "Gateway_Chassis" table in 'row' to
 * 'priority'.
 *
 * Argument constraints: in range 0 to 32,767
 *
 * The caller retains ownership of the arguments. */
void
nbrec_gateway_chassis_set_priority(const struct nbrec_gateway_chassis *row, int64_t priority)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.integer = priority;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_gateway_chassis_col_priority, &datum);
}

/* Sets an element of the "external_ids" map column from the "Gateway_Chassis" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_gateway_chassis_update_external_ids_setkey(const struct nbrec_gateway_chassis *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_gateway_chassis_col_external_ids,
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "Gateway_Chassis" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_gateway_chassis_update_external_ids_delkey(const struct nbrec_gateway_chassis *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_gateway_chassis_col_external_ids,
                                    datum);
}

/* Sets an element of the "options" map column from the "Gateway_Chassis" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_gateway_chassis_update_options_setkey(const struct nbrec_gateway_chassis *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_gateway_chassis_col_options,
                                    datum);
}

/* Deletes an element of the "options" map column from the "Gateway_Chassis" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_gateway_chassis_update_options_delkey(const struct nbrec_gateway_chassis *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_gateway_chassis_col_options,
                                    datum);
}

/* Sets the "chassis_name" column from the "Gateway_Chassis" table in 'row' to
 * 'chassis_name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_gateway_chassis_add_clause_chassis_name(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *chassis_name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, chassis_name);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_gateway_chassis_col_chassis_name,
                          &datum);
}

/* Sets the "external_ids" column's value from the "Gateway_Chassis" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_gateway_chassis_add_clause_external_ids(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_gateway_chassis_col_external_ids,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_gateway_chassis_col_external_ids.type);
}


/* Sets the "name" column from the "Gateway_Chassis" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_gateway_chassis_add_clause_name(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_gateway_chassis_col_name,
                          &datum);
}

/* Sets the "options" column's value from the "Gateway_Chassis" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_gateway_chassis_add_clause_options(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *options)
{
    struct ovsdb_datum datum;

    if (options) {
        ovsdb_datum_from_smap(&datum, options);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_gateway_chassis_col_options,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_gateway_chassis_col_options.type);
}


/* Sets the "priority" column from the "Gateway_Chassis" table in 'row' to
 * 'priority'.
 *
 * Argument constraints: in range 0 to 32,767
 *
 * The caller retains ownership of the arguments. */
void
nbrec_gateway_chassis_add_clause_priority(struct ovsdb_idl_condition *cond, enum ovsdb_function function, int64_t priority)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.integer = priority;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_gateway_chassis_col_priority,
                          &datum);
}

/* Destroy 'row' of kind "Gateway_Chassis". The row must have been
 * created with ovsdb_idl_index_init_row.
 */
void
nbrec_gateway_chassis_index_destroy_row(const struct nbrec_gateway_chassis *row)
{
    ovsdb_idl_index_destroy_row__(&row->header_);
}
        

/* Creates a new row of kind "Gateway_Chassis". */
struct nbrec_gateway_chassis *
nbrec_gateway_chassis_index_init_row(struct ovsdb_idl *idl, const struct ovsdb_idl_table_class *class)
{
    return (struct nbrec_gateway_chassis *) ovsdb_idl_index_init_row(idl, class);
}

/*  This function is used to compare "nbrec_gateway_chassis" records on table in iteration loops for compound-index operations.
    After been called, cursor point to current position in the index
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct "nbrec_gateway_chassis" *const_data1,  const struct "nbrec_gateway_chassis" *const_data2. Data to be compared.
    Return value: 0 if both data values are equal, -1 if first parameter is less than second and 1 otherwise. */
int
nbrec_gateway_chassis_index_compare(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_gateway_chassis *const_data1,  const struct nbrec_gateway_chassis *const_data2)
{
    struct nbrec_gateway_chassis *data1 = CONST_CAST(struct nbrec_gateway_chassis *, const_data1);
    struct nbrec_gateway_chassis *data2 = CONST_CAST(struct nbrec_gateway_chassis *, const_data2);
    return ovsdb_idl_index_compare(cursor, &data1->header_, &data2->header_);
}

/*  This function is called to position the cursor at the first row in "nbrec_gateway_chassis" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The first row in the corresponding index. */
const struct nbrec_gateway_chassis *
nbrec_gateway_chassis_index_first(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_gateway_chassis_cast(ovsdb_idl_index_first(cursor));
}

/*  This function is called to position the cursor at the next row in "nbrec_gateway_chassis" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The next row in the corresponding index. */
const struct nbrec_gateway_chassis *
nbrec_gateway_chassis_index_next(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_gateway_chassis_cast(ovsdb_idl_index_next(cursor));
}

/*  This function is used to find the data of the row in "nbrec_gateway_chassis" table that meet criteria with the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_gateway_chassis *const_data. Data to be searched.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_gateway_chassis *
nbrec_gateway_chassis_index_find(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_gateway_chassis *const_data)
{
    struct nbrec_gateway_chassis *data = CONST_CAST(struct nbrec_gateway_chassis *, const_data);
    return nbrec_gateway_chassis_cast(ovsdb_idl_index_find(cursor, &data->header_));
}

/*  This function is used to set the cursor pointing to the row in "nbrec_gateway_chassis" table that meet criteria of the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_gateway_chassis *const_data. Data to be searched.
    Return value: The row in the corresponding index closest to the criteria. */
const struct nbrec_gateway_chassis *
nbrec_gateway_chassis_index_forward_to(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_gateway_chassis *const_data)
{
    struct nbrec_gateway_chassis *data = CONST_CAST(struct nbrec_gateway_chassis *, const_data);
    return nbrec_gateway_chassis_cast(ovsdb_idl_index_forward_to(cursor, &data->header_));
}

/*  This function is used to get the data of the row in the current position pointed by the cursor in
    "nbrec_gateway_chassis" table.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_gateway_chassis *
nbrec_gateway_chassis_index_get_data(const struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_gateway_chassis_cast(ovsdb_idl_index_data(CONST_CAST(struct ovsdb_idl_index_cursor *, cursor)));
}

/* Sets the "chassis_name" column from the "Gateway_Chassis" table in 'row' to
 * 'chassis_name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_gateway_chassis_index_set_chassis_name(const struct nbrec_gateway_chassis *row, const char *chassis_name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, chassis_name);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_gateway_chassis_columns[ NBREC_GATEWAY_CHASSIS_COL_CHASSIS_NAME ], &datum, &nbrec_table_classes[NBREC_TABLE_GATEWAY_CHASSIS]);
}

/* Sets the "external_ids" column's value from the "Gateway_Chassis" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_gateway_chassis_index_set_external_ids(const struct nbrec_gateway_chassis *row, const struct smap *external_ids)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(external_ids);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_gateway_chassis_columns[NBREC_GATEWAY_CHASSIS_COL_EXTERNAL_IDS],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_GATEWAY_CHASSIS]);
}


/* Sets the "name" column from the "Gateway_Chassis" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_gateway_chassis_index_set_name(const struct nbrec_gateway_chassis *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_gateway_chassis_columns[ NBREC_GATEWAY_CHASSIS_COL_NAME ], &datum, &nbrec_table_classes[NBREC_TABLE_GATEWAY_CHASSIS]);
}

/* Sets the "options" column's value from the "Gateway_Chassis" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_gateway_chassis_index_set_options(const struct nbrec_gateway_chassis *row, const struct smap *options)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (options) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(options);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, options) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_gateway_chassis_columns[NBREC_GATEWAY_CHASSIS_COL_OPTIONS],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_GATEWAY_CHASSIS]);
}


/* Sets the "priority" column from the "Gateway_Chassis" table in 'row' to
 * 'priority'.
 *
 * Argument constraints: in range 0 to 32,767
 *
 * The caller retains ownership of the arguments. */
void
nbrec_gateway_chassis_index_set_priority(const struct nbrec_gateway_chassis *row, int64_t priority)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->integer = priority;
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_gateway_chassis_columns[ NBREC_GATEWAY_CHASSIS_COL_PRIORITY ], &datum, &nbrec_table_classes[NBREC_TABLE_GATEWAY_CHASSIS]);
}

struct ovsdb_idl_column nbrec_gateway_chassis_columns[NBREC_GATEWAY_CHASSIS_N_COLUMNS];

void
nbrec_gateway_chassis_set_condition(struct ovsdb_idl *idl, struct ovsdb_idl_condition *condition)
{
    ovsdb_idl_set_condition(idl, &nbrec_table_gateway_chassis, condition);
}

struct ovsdb_idl_column nbrec_gateway_chassis_columns[NBREC_GATEWAY_CHASSIS_N_COLUMNS] = {
    [NBREC_GATEWAY_CHASSIS_COL_CHASSIS_NAME] = {
         .name = "chassis_name",
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
         .parse = nbrec_gateway_chassis_parse_chassis_name,
         .unparse = nbrec_gateway_chassis_unparse_chassis_name,
    },

    [NBREC_GATEWAY_CHASSIS_COL_EXTERNAL_IDS] = {
         .name = "external_ids",
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
         .parse = nbrec_gateway_chassis_parse_external_ids,
         .unparse = nbrec_gateway_chassis_unparse_external_ids,
    },

    [NBREC_GATEWAY_CHASSIS_COL_NAME] = {
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
         .parse = nbrec_gateway_chassis_parse_name,
         .unparse = nbrec_gateway_chassis_unparse_name,
    },

    [NBREC_GATEWAY_CHASSIS_COL_OPTIONS] = {
         .name = "options",
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
         .parse = nbrec_gateway_chassis_parse_options,
         .unparse = nbrec_gateway_chassis_unparse_options,
    },

    [NBREC_GATEWAY_CHASSIS_COL_PRIORITY] = {
         .name = "priority",
         .type = {
            .key = {
               .type = OVSDB_TYPE_INTEGER,
               .u.integer = { .min = INT64_C(0), .max = INT64_C(32767) },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 1,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_gateway_chassis_parse_priority,
         .unparse = nbrec_gateway_chassis_unparse_priority,
    },

};

/* Load_Balancer table. */

static void
nbrec_load_balancer_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_load_balancer *row = nbrec_load_balancer_cast(row_);
    smap_init(&row->external_ids);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_load_balancer_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_load_balancer *row = nbrec_load_balancer_cast(row_);

    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
nbrec_load_balancer_parse_protocol(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_load_balancer *row = nbrec_load_balancer_cast(row_);

    if (datum->n >= 1) {
        row->protocol = datum->keys[0].string;
    } else {
        row->protocol = NULL;
    }
}

static void
nbrec_load_balancer_parse_vips(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_load_balancer *row = nbrec_load_balancer_cast(row_);
    smap_init(&row->vips);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->vips,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_load_balancer_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_load_balancer *row = nbrec_load_balancer_cast(row_);
    smap_destroy(&row->external_ids);
}

static void
nbrec_load_balancer_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_load_balancer_unparse_protocol(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_load_balancer_unparse_vips(struct ovsdb_idl_row *row_)
{
    struct nbrec_load_balancer *row = nbrec_load_balancer_cast(row_);
    smap_destroy(&row->vips);
}

static void
nbrec_load_balancer_init__(struct ovsdb_idl_row *row)
{
    nbrec_load_balancer_init(nbrec_load_balancer_cast(row));
}

/* Clears the contents of 'row' in table "Load_Balancer". */
void
nbrec_load_balancer_init(struct nbrec_load_balancer *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
    row->name = "";
    smap_init(&row->vips);
}

/* Searches table "Load_Balancer" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_load_balancer *
nbrec_load_balancer_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_load_balancer_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_load_balancer, uuid));
}

/* Returns a row in table "Load_Balancer" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_load_balancer *
nbrec_load_balancer_first(const struct ovsdb_idl *idl)
{
    return nbrec_load_balancer_cast(ovsdb_idl_first_row(idl, &nbrec_table_load_balancer));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_load_balancer *
nbrec_load_balancer_next(const struct nbrec_load_balancer *row)
{
    return nbrec_load_balancer_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_load_balancer_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_load_balancer);
}

unsigned int nbrec_load_balancer_row_get_seqno(const struct nbrec_load_balancer *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_load_balancer *
nbrec_load_balancer_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_load_balancer_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_load_balancer));
}

const struct nbrec_load_balancer
*nbrec_load_balancer_track_get_next(const struct nbrec_load_balancer *row)
{
    return nbrec_load_balancer_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Load_Balancer".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_load_balancer_delete(const struct nbrec_load_balancer *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Load_Balancer" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_load_balancer *
nbrec_load_balancer_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_load_balancer_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_load_balancer, NULL));
}

bool
nbrec_load_balancer_is_updated(const struct nbrec_load_balancer *row, enum nbrec_load_balancer_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_load_balancer_columns[column]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_load_balancer_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_load_balancer_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_load_balancer_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_load_balancer_verify_external_ids(const struct nbrec_load_balancer *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_load_balancer_col_external_ids);
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
 *     nbrec_load_balancer_insert()).
 *
 *   - If "name" has already been modified (with
 *     nbrec_load_balancer_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_load_balancer_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_load_balancer_verify_name(const struct nbrec_load_balancer *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_load_balancer_col_name);
}

/* Causes the original contents of column "protocol" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "protocol" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "protocol" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "protocol" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_load_balancer_insert()).
 *
 *   - If "protocol" has already been modified (with
 *     nbrec_load_balancer_set_protocol()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_load_balancer_set_protocol() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_load_balancer_verify_protocol(const struct nbrec_load_balancer *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_load_balancer_col_protocol);
}

/* Causes the original contents of column "vips" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "vips" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "vips" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "vips" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_load_balancer_insert()).
 *
 *   - If "vips" has already been modified (with
 *     nbrec_load_balancer_set_vips()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_load_balancer_set_vips() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_load_balancer_verify_vips(const struct nbrec_load_balancer *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_load_balancer_col_vips);
}

/* Returns the "external_ids" column's value from the "Load_Balancer" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
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
 * directly through the "external_ids" member in nbrec_load_balancer. */
const struct ovsdb_datum *
nbrec_load_balancer_get_external_ids(const struct nbrec_load_balancer *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_load_balancer_col_external_ids);
}

/* Returns the "name" column's value from the "Load_Balancer" table in 'row'
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
 * directly through the "name" member in nbrec_load_balancer. */
const struct ovsdb_datum *
nbrec_load_balancer_get_name(const struct nbrec_load_balancer *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_load_balancer_col_name);
}

/* Returns the "protocol" column's value from the "Load_Balancer" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes protocol's
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
 * directly through the "protocol" member in nbrec_load_balancer. */
const struct ovsdb_datum *
nbrec_load_balancer_get_protocol(const struct nbrec_load_balancer *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_load_balancer_col_protocol);
}

/* Returns the "vips" column's value from the "Load_Balancer" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes vips's
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
 * directly through the "vips" member in nbrec_load_balancer. */
const struct ovsdb_datum *
nbrec_load_balancer_get_vips(const struct nbrec_load_balancer *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_load_balancer_col_vips);
}

/* Sets the "external_ids" column's value from the "Load_Balancer" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_load_balancer_set_external_ids(const struct nbrec_load_balancer *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_load_balancer_col_external_ids,
                        &datum);
}


/* Sets the "name" column from the "Load_Balancer" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_load_balancer_set_name(const struct nbrec_load_balancer *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_load_balancer_col_name, &datum);
}

/* Sets the "protocol" column from the "Load_Balancer" table in 'row' to
 * the 'protocol' set.
 *
 * If "protocol" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: either "tcp" or "udp"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_load_balancer_set_protocol(const struct nbrec_load_balancer *row, const char *protocol)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (protocol) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, protocol);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_load_balancer_col_protocol, &datum);
}

/* Sets the "vips" column's value from the "Load_Balancer" table in 'row'
 * to 'vips'.
 *
 * The caller retains ownership of 'vips' and everything in it. */
void
nbrec_load_balancer_set_vips(const struct nbrec_load_balancer *row, const struct smap *vips)
{
    struct ovsdb_datum datum;

    if (vips) {
        ovsdb_datum_from_smap(&datum, vips);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_load_balancer_col_vips,
                        &datum);
}


/* Sets an element of the "external_ids" map column from the "Load_Balancer" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_load_balancer_update_external_ids_setkey(const struct nbrec_load_balancer *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_load_balancer_col_external_ids,
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "Load_Balancer" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_load_balancer_update_external_ids_delkey(const struct nbrec_load_balancer *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_load_balancer_col_external_ids,
                                    datum);
}

/* Adds the value 'new_value' to the "protocol" set column from the "Load_Balancer" table
 * in 'row'.
 *
 */
void
nbrec_load_balancer_update_protocol_addvalue(const struct nbrec_load_balancer *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_load_balancer_col_protocol,
                                    datum);
}

/* Deletes the value 'delete_value' from the "protocol" set column from the
 * "Load_Balancer" table in 'row'.
 *
 */
void
nbrec_load_balancer_update_protocol_delvalue(const struct nbrec_load_balancer *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_load_balancer_col_protocol,
                                    datum);
}

/* Sets an element of the "vips" map column from the "Load_Balancer" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_load_balancer_update_vips_setkey(const struct nbrec_load_balancer *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_load_balancer_col_vips,
                                    datum);
}

/* Deletes an element of the "vips" map column from the "Load_Balancer" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_load_balancer_update_vips_delkey(const struct nbrec_load_balancer *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_load_balancer_col_vips,
                                    datum);
}

/* Sets the "external_ids" column's value from the "Load_Balancer" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_load_balancer_add_clause_external_ids(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_load_balancer_col_external_ids,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_load_balancer_col_external_ids.type);
}


/* Sets the "name" column from the "Load_Balancer" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_load_balancer_add_clause_name(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_load_balancer_col_name,
                          &datum);
}

/* Sets the "protocol" column from the "Load_Balancer" table in 'row' to
 * the 'protocol' set.
 *
 * If "protocol" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: either "tcp" or "udp"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_load_balancer_add_clause_protocol(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *protocol)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (protocol) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, protocol);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_load_balancer_col_protocol,
                          &datum);
}

/* Sets the "vips" column's value from the "Load_Balancer" table in 'row'
 * to 'vips'.
 *
 * The caller retains ownership of 'vips' and everything in it. */
void
nbrec_load_balancer_add_clause_vips(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *vips)
{
    struct ovsdb_datum datum;

    if (vips) {
        ovsdb_datum_from_smap(&datum, vips);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_load_balancer_col_vips,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_load_balancer_col_vips.type);
}


/* Destroy 'row' of kind "Load_Balancer". The row must have been
 * created with ovsdb_idl_index_init_row.
 */
void
nbrec_load_balancer_index_destroy_row(const struct nbrec_load_balancer *row)
{
    ovsdb_idl_index_destroy_row__(&row->header_);
}
        

/* Creates a new row of kind "Load_Balancer". */
struct nbrec_load_balancer *
nbrec_load_balancer_index_init_row(struct ovsdb_idl *idl, const struct ovsdb_idl_table_class *class)
{
    return (struct nbrec_load_balancer *) ovsdb_idl_index_init_row(idl, class);
}

/*  This function is used to compare "nbrec_load_balancer" records on table in iteration loops for compound-index operations.
    After been called, cursor point to current position in the index
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct "nbrec_load_balancer" *const_data1,  const struct "nbrec_load_balancer" *const_data2. Data to be compared.
    Return value: 0 if both data values are equal, -1 if first parameter is less than second and 1 otherwise. */
int
nbrec_load_balancer_index_compare(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_load_balancer *const_data1,  const struct nbrec_load_balancer *const_data2)
{
    struct nbrec_load_balancer *data1 = CONST_CAST(struct nbrec_load_balancer *, const_data1);
    struct nbrec_load_balancer *data2 = CONST_CAST(struct nbrec_load_balancer *, const_data2);
    return ovsdb_idl_index_compare(cursor, &data1->header_, &data2->header_);
}

/*  This function is called to position the cursor at the first row in "nbrec_load_balancer" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The first row in the corresponding index. */
const struct nbrec_load_balancer *
nbrec_load_balancer_index_first(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_load_balancer_cast(ovsdb_idl_index_first(cursor));
}

/*  This function is called to position the cursor at the next row in "nbrec_load_balancer" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The next row in the corresponding index. */
const struct nbrec_load_balancer *
nbrec_load_balancer_index_next(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_load_balancer_cast(ovsdb_idl_index_next(cursor));
}

/*  This function is used to find the data of the row in "nbrec_load_balancer" table that meet criteria with the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_load_balancer *const_data. Data to be searched.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_load_balancer *
nbrec_load_balancer_index_find(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_load_balancer *const_data)
{
    struct nbrec_load_balancer *data = CONST_CAST(struct nbrec_load_balancer *, const_data);
    return nbrec_load_balancer_cast(ovsdb_idl_index_find(cursor, &data->header_));
}

/*  This function is used to set the cursor pointing to the row in "nbrec_load_balancer" table that meet criteria of the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_load_balancer *const_data. Data to be searched.
    Return value: The row in the corresponding index closest to the criteria. */
const struct nbrec_load_balancer *
nbrec_load_balancer_index_forward_to(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_load_balancer *const_data)
{
    struct nbrec_load_balancer *data = CONST_CAST(struct nbrec_load_balancer *, const_data);
    return nbrec_load_balancer_cast(ovsdb_idl_index_forward_to(cursor, &data->header_));
}

/*  This function is used to get the data of the row in the current position pointed by the cursor in
    "nbrec_load_balancer" table.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_load_balancer *
nbrec_load_balancer_index_get_data(const struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_load_balancer_cast(ovsdb_idl_index_data(CONST_CAST(struct ovsdb_idl_index_cursor *, cursor)));
}

/* Sets the "external_ids" column's value from the "Load_Balancer" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_load_balancer_index_set_external_ids(const struct nbrec_load_balancer *row, const struct smap *external_ids)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(external_ids);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_EXTERNAL_IDS],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_LOAD_BALANCER]);
}


/* Sets the "name" column from the "Load_Balancer" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_load_balancer_index_set_name(const struct nbrec_load_balancer *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_load_balancer_columns[ NBREC_LOAD_BALANCER_COL_NAME ], &datum, &nbrec_table_classes[NBREC_TABLE_LOAD_BALANCER]);
}

/* Sets the "protocol" column from the "Load_Balancer" table in 'row' to
 * the 'protocol' set.
 *
 * If "protocol" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: either "tcp" or "udp"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_load_balancer_index_set_protocol(const struct nbrec_load_balancer *row, const char *protocol)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof (union ovsdb_atom));

    if (protocol) {
        datum.n = 1;
        datum.keys = key;
        key->string = CONST_CAST(char *, protocol);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_load_balancer_columns[ NBREC_LOAD_BALANCER_COL_PROTOCOL ], &datum, &nbrec_table_classes[NBREC_TABLE_LOAD_BALANCER]);
}

/* Sets the "vips" column's value from the "Load_Balancer" table in 'row'
 * to 'vips'.
 *
 * The caller retains ownership of 'vips' and everything in it. */
void
nbrec_load_balancer_index_set_vips(const struct nbrec_load_balancer *row, const struct smap *vips)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (vips) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(vips);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, vips) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_VIPS],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_LOAD_BALANCER]);
}


struct ovsdb_idl_column nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_N_COLUMNS];

void
nbrec_load_balancer_set_condition(struct ovsdb_idl *idl, struct ovsdb_idl_condition *condition)
{
    ovsdb_idl_set_condition(idl, &nbrec_table_load_balancer, condition);
}
static union ovsdb_atom Load_Balancer_col_protocol_key_enum_keys[2] = {
    { .string = "tcp" },
    { .string = "udp" },
};
static struct ovsdb_datum Load_Balancer_col_protocol_key_enum = {
    .n = 2,
    .keys = Load_Balancer_col_protocol_key_enum_keys,
};

struct ovsdb_idl_column nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_N_COLUMNS] = {
    [NBREC_LOAD_BALANCER_COL_EXTERNAL_IDS] = {
         .name = "external_ids",
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
         .parse = nbrec_load_balancer_parse_external_ids,
         .unparse = nbrec_load_balancer_unparse_external_ids,
    },

    [NBREC_LOAD_BALANCER_COL_NAME] = {
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
         .parse = nbrec_load_balancer_parse_name,
         .unparse = nbrec_load_balancer_unparse_name,
    },

    [NBREC_LOAD_BALANCER_COL_PROTOCOL] = {
         .name = "protocol",
         .type = {
            .key = {
               .type = OVSDB_TYPE_STRING,
               .enum_ = &Load_Balancer_col_protocol_key_enum,
               .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_load_balancer_parse_protocol,
         .unparse = nbrec_load_balancer_unparse_protocol,
    },

    [NBREC_LOAD_BALANCER_COL_VIPS] = {
         .name = "vips",
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
         .parse = nbrec_load_balancer_parse_vips,
         .unparse = nbrec_load_balancer_unparse_vips,
    },

};

/* Logical_Router table. */

static void
nbrec_logical_router_parse_enabled(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);
    size_t n = MIN(1, datum->n);
    row->enabled = NULL;
    row->n_enabled = 0;
    for (size_t i = 0; i < n; i++) {
        if (!row->n_enabled) {
            row->enabled = xmalloc(n * sizeof *row->enabled);
        }
        row->enabled[row->n_enabled] = datum->keys[i].boolean;
        row->n_enabled++;
    }
}

static void
nbrec_logical_router_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);
    smap_init(&row->external_ids);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_logical_router_parse_load_balancer(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);
    row->load_balancer = NULL;
    row->n_load_balancer = 0;
    for (size_t i = 0; i < datum->n; i++) {
        struct nbrec_load_balancer *keyRow = nbrec_load_balancer_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_load_balancer, &datum->keys[i].uuid));
        if (!keyRow) {
            continue;
        }
        if (!row->n_load_balancer) {
            row->load_balancer = xmalloc(datum->n * sizeof *row->load_balancer);
        }
        row->load_balancer[row->n_load_balancer] = keyRow;
        row->n_load_balancer++;
    }
}

static void
nbrec_logical_router_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);

    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
nbrec_logical_router_parse_nat(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);
    row->nat = NULL;
    row->n_nat = 0;
    for (size_t i = 0; i < datum->n; i++) {
        struct nbrec_nat *keyRow = nbrec_nat_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_nat, &datum->keys[i].uuid));
        if (!keyRow) {
            continue;
        }
        if (!row->n_nat) {
            row->nat = xmalloc(datum->n * sizeof *row->nat);
        }
        row->nat[row->n_nat] = keyRow;
        row->n_nat++;
    }
}

static void
nbrec_logical_router_parse_options(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);
    smap_init(&row->options);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->options,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_logical_router_parse_ports(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);
    row->ports = NULL;
    row->n_ports = 0;
    for (size_t i = 0; i < datum->n; i++) {
        struct nbrec_logical_router_port *keyRow = nbrec_logical_router_port_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_logical_router_port, &datum->keys[i].uuid));
        if (!keyRow) {
            continue;
        }
        if (!row->n_ports) {
            row->ports = xmalloc(datum->n * sizeof *row->ports);
        }
        row->ports[row->n_ports] = keyRow;
        row->n_ports++;
    }
}

static void
nbrec_logical_router_parse_static_routes(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);
    row->static_routes = NULL;
    row->n_static_routes = 0;
    for (size_t i = 0; i < datum->n; i++) {
        struct nbrec_logical_router_static_route *keyRow = nbrec_logical_router_static_route_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_logical_router_static_route, &datum->keys[i].uuid));
        if (!keyRow) {
            continue;
        }
        if (!row->n_static_routes) {
            row->static_routes = xmalloc(datum->n * sizeof *row->static_routes);
        }
        row->static_routes[row->n_static_routes] = keyRow;
        row->n_static_routes++;
    }
}

static void
nbrec_logical_router_unparse_enabled(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);
    free(row->enabled);
}

static void
nbrec_logical_router_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);
    smap_destroy(&row->external_ids);
}

static void
nbrec_logical_router_unparse_load_balancer(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);
    free(row->load_balancer);
}

static void
nbrec_logical_router_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_router_unparse_nat(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);
    free(row->nat);
}

static void
nbrec_logical_router_unparse_options(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);
    smap_destroy(&row->options);
}

static void
nbrec_logical_router_unparse_ports(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);
    free(row->ports);
}

static void
nbrec_logical_router_unparse_static_routes(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);
    free(row->static_routes);
}

static void
nbrec_logical_router_init__(struct ovsdb_idl_row *row)
{
    nbrec_logical_router_init(nbrec_logical_router_cast(row));
}

/* Clears the contents of 'row' in table "Logical_Router". */
void
nbrec_logical_router_init(struct nbrec_logical_router *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
    row->name = "";
    smap_init(&row->options);
}

/* Searches table "Logical_Router" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_logical_router *
nbrec_logical_router_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_logical_router_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_logical_router, uuid));
}

/* Returns a row in table "Logical_Router" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_logical_router *
nbrec_logical_router_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_router_cast(ovsdb_idl_first_row(idl, &nbrec_table_logical_router));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_logical_router *
nbrec_logical_router_next(const struct nbrec_logical_router *row)
{
    return nbrec_logical_router_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_logical_router_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_logical_router);
}

unsigned int nbrec_logical_router_row_get_seqno(const struct nbrec_logical_router *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_logical_router *
nbrec_logical_router_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_router_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_logical_router));
}

const struct nbrec_logical_router
*nbrec_logical_router_track_get_next(const struct nbrec_logical_router *row)
{
    return nbrec_logical_router_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Logical_Router".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_delete(const struct nbrec_logical_router *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Logical_Router" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_logical_router *
nbrec_logical_router_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_logical_router_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_logical_router, NULL));
}

bool
nbrec_logical_router_is_updated(const struct nbrec_logical_router *row, enum nbrec_logical_router_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_logical_router_columns[column]);
}

/* Causes the original contents of column "enabled" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "enabled" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "enabled" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "enabled" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_insert()).
 *
 *   - If "enabled" has already been modified (with
 *     nbrec_logical_router_set_enabled()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_set_enabled() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_verify_enabled(const struct nbrec_logical_router *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_col_enabled);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_logical_router_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_verify_external_ids(const struct nbrec_logical_router *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_col_external_ids);
}

/* Causes the original contents of column "load_balancer" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "load_balancer" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "load_balancer" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "load_balancer" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_insert()).
 *
 *   - If "load_balancer" has already been modified (with
 *     nbrec_logical_router_set_load_balancer()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_set_load_balancer() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_verify_load_balancer(const struct nbrec_logical_router *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_col_load_balancer);
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
 *     nbrec_logical_router_insert()).
 *
 *   - If "name" has already been modified (with
 *     nbrec_logical_router_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_verify_name(const struct nbrec_logical_router *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_col_name);
}

/* Causes the original contents of column "nat" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "nat" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "nat" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "nat" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_insert()).
 *
 *   - If "nat" has already been modified (with
 *     nbrec_logical_router_set_nat()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_set_nat() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_verify_nat(const struct nbrec_logical_router *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_col_nat);
}

/* Causes the original contents of column "options" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "options" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "options" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "options" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_insert()).
 *
 *   - If "options" has already been modified (with
 *     nbrec_logical_router_set_options()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_set_options() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_verify_options(const struct nbrec_logical_router *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_col_options);
}

/* Causes the original contents of column "ports" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ports" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ports" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ports" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_insert()).
 *
 *   - If "ports" has already been modified (with
 *     nbrec_logical_router_set_ports()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_set_ports() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_verify_ports(const struct nbrec_logical_router *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_col_ports);
}

/* Causes the original contents of column "static_routes" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "static_routes" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "static_routes" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "static_routes" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_insert()).
 *
 *   - If "static_routes" has already been modified (with
 *     nbrec_logical_router_set_static_routes()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_set_static_routes() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_verify_static_routes(const struct nbrec_logical_router *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_col_static_routes);
}

/* Returns the "enabled" column's value from the "Logical_Router" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes enabled's
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
 * directly through the "enabled" member in nbrec_logical_router. */
const struct ovsdb_datum *
nbrec_logical_router_get_enabled(const struct nbrec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_col_enabled);
}

/* Returns the "external_ids" column's value from the "Logical_Router" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
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
 * directly through the "external_ids" member in nbrec_logical_router. */
const struct ovsdb_datum *
nbrec_logical_router_get_external_ids(const struct nbrec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_col_external_ids);
}

/* Returns the "load_balancer" column's value from the "Logical_Router" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes load_balancer's
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
 * directly through the "load_balancer" member in nbrec_logical_router. */
const struct ovsdb_datum *
nbrec_logical_router_get_load_balancer(const struct nbrec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_col_load_balancer);
}

/* Returns the "name" column's value from the "Logical_Router" table in 'row'
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
 * directly through the "name" member in nbrec_logical_router. */
const struct ovsdb_datum *
nbrec_logical_router_get_name(const struct nbrec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_col_name);
}

/* Returns the "nat" column's value from the "Logical_Router" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes nat's
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
 * directly through the "nat" member in nbrec_logical_router. */
const struct ovsdb_datum *
nbrec_logical_router_get_nat(const struct nbrec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_col_nat);
}

/* Returns the "options" column's value from the "Logical_Router" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes options's
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
 * directly through the "options" member in nbrec_logical_router. */
const struct ovsdb_datum *
nbrec_logical_router_get_options(const struct nbrec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_col_options);
}

/* Returns the "ports" column's value from the "Logical_Router" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes ports's
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
 * directly through the "ports" member in nbrec_logical_router. */
const struct ovsdb_datum *
nbrec_logical_router_get_ports(const struct nbrec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_col_ports);
}

/* Returns the "static_routes" column's value from the "Logical_Router" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes static_routes's
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
 * directly through the "static_routes" member in nbrec_logical_router. */
const struct ovsdb_datum *
nbrec_logical_router_get_static_routes(const struct nbrec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_col_static_routes);
}

/* Sets the "enabled" column from the "Logical_Router" table in 'row' to
 * the 'enabled' set with 'n_enabled' entries.
 *
 * 'n_enabled' may be 0 or 1; if it is 0, then 'enabled'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_set_enabled(const struct nbrec_logical_router *row, const bool *enabled, size_t n_enabled)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (n_enabled) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *enabled;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_col_enabled, &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Router" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_router_set_external_ids(const struct nbrec_logical_router *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_logical_router_col_external_ids,
                        &datum);
}


/* Sets the "load_balancer" column from the "Logical_Router" table in 'row' to
 * the 'load_balancer' set with 'n_load_balancer' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_set_load_balancer(const struct nbrec_logical_router *row, struct nbrec_load_balancer **load_balancer, size_t n_load_balancer)
{
    struct ovsdb_datum datum;

    datum.n = n_load_balancer;
    datum.keys = n_load_balancer ? xmalloc(n_load_balancer * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_load_balancer; i++) {
        datum.keys[i].uuid = load_balancer[i]->header_.uuid;
    }
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_router_col_load_balancer, &datum);
}

/* Sets the "name" column from the "Logical_Router" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_set_name(const struct nbrec_logical_router *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_col_name, &datum);
}

/* Sets the "nat" column from the "Logical_Router" table in 'row' to
 * the 'nat' set with 'n_nat' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_set_nat(const struct nbrec_logical_router *row, struct nbrec_nat **nat, size_t n_nat)
{
    struct ovsdb_datum datum;

    datum.n = n_nat;
    datum.keys = n_nat ? xmalloc(n_nat * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_nat; i++) {
        datum.keys[i].uuid = nat[i]->header_.uuid;
    }
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_router_col_nat, &datum);
}

/* Sets the "options" column's value from the "Logical_Router" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_logical_router_set_options(const struct nbrec_logical_router *row, const struct smap *options)
{
    struct ovsdb_datum datum;

    if (options) {
        ovsdb_datum_from_smap(&datum, options);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_logical_router_col_options,
                        &datum);
}


/* Sets the "ports" column from the "Logical_Router" table in 'row' to
 * the 'ports' set with 'n_ports' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_set_ports(const struct nbrec_logical_router *row, struct nbrec_logical_router_port **ports, size_t n_ports)
{
    struct ovsdb_datum datum;

    datum.n = n_ports;
    datum.keys = n_ports ? xmalloc(n_ports * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_ports; i++) {
        datum.keys[i].uuid = ports[i]->header_.uuid;
    }
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_router_col_ports, &datum);
}

/* Sets the "static_routes" column from the "Logical_Router" table in 'row' to
 * the 'static_routes' set with 'n_static_routes' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_set_static_routes(const struct nbrec_logical_router *row, struct nbrec_logical_router_static_route **static_routes, size_t n_static_routes)
{
    struct ovsdb_datum datum;

    datum.n = n_static_routes;
    datum.keys = n_static_routes ? xmalloc(n_static_routes * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_static_routes; i++) {
        datum.keys[i].uuid = static_routes[i]->header_.uuid;
    }
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_router_col_static_routes, &datum);
}

/* Adds the value 'new_value' to the "enabled" set column from the "Logical_Router" table
 * in 'row'.
 *
 */
void
nbrec_logical_router_update_enabled_addvalue(const struct nbrec_logical_router *row, bool new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].boolean = new_value;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_router_col_enabled,
                                    datum);
}

/* Deletes the value 'delete_value' from the "enabled" set column from the
 * "Logical_Router" table in 'row'.
 *
 */
void
nbrec_logical_router_update_enabled_delvalue(const struct nbrec_logical_router *row, bool delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].boolean = delete_value;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_router_col_enabled,
                                    datum);
}

/* Sets an element of the "external_ids" map column from the "Logical_Router" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_logical_router_update_external_ids_setkey(const struct nbrec_logical_router *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_logical_router_col_external_ids,
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "Logical_Router" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_logical_router_update_external_ids_delkey(const struct nbrec_logical_router *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_logical_router_col_external_ids,
                                    datum);
}

/* Adds the value 'new_value' to the "load_balancer" set column from the "Logical_Router" table
 * in 'row'.
 *
 */
void
nbrec_logical_router_update_load_balancer_addvalue(const struct nbrec_logical_router *row, const struct nbrec_load_balancer *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_router_col_load_balancer,
                                    datum);
}

/* Deletes the value 'delete_value' from the "load_balancer" set column from the
 * "Logical_Router" table in 'row'.
 *
 */
void
nbrec_logical_router_update_load_balancer_delvalue(const struct nbrec_logical_router *row, const struct nbrec_load_balancer *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_router_col_load_balancer,
                                    datum);
}

/* Adds the value 'new_value' to the "nat" set column from the "Logical_Router" table
 * in 'row'.
 *
 */
void
nbrec_logical_router_update_nat_addvalue(const struct nbrec_logical_router *row, const struct nbrec_nat *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_router_col_nat,
                                    datum);
}

/* Deletes the value 'delete_value' from the "nat" set column from the
 * "Logical_Router" table in 'row'.
 *
 */
void
nbrec_logical_router_update_nat_delvalue(const struct nbrec_logical_router *row, const struct nbrec_nat *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_router_col_nat,
                                    datum);
}

/* Sets an element of the "options" map column from the "Logical_Router" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_logical_router_update_options_setkey(const struct nbrec_logical_router *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_logical_router_col_options,
                                    datum);
}

/* Deletes an element of the "options" map column from the "Logical_Router" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_logical_router_update_options_delkey(const struct nbrec_logical_router *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_logical_router_col_options,
                                    datum);
}

/* Adds the value 'new_value' to the "ports" set column from the "Logical_Router" table
 * in 'row'.
 *
 */
void
nbrec_logical_router_update_ports_addvalue(const struct nbrec_logical_router *row, const struct nbrec_logical_router_port *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_router_col_ports,
                                    datum);
}

/* Deletes the value 'delete_value' from the "ports" set column from the
 * "Logical_Router" table in 'row'.
 *
 */
void
nbrec_logical_router_update_ports_delvalue(const struct nbrec_logical_router *row, const struct nbrec_logical_router_port *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_router_col_ports,
                                    datum);
}

/* Adds the value 'new_value' to the "static_routes" set column from the "Logical_Router" table
 * in 'row'.
 *
 */
void
nbrec_logical_router_update_static_routes_addvalue(const struct nbrec_logical_router *row, const struct nbrec_logical_router_static_route *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_router_col_static_routes,
                                    datum);
}

/* Deletes the value 'delete_value' from the "static_routes" set column from the
 * "Logical_Router" table in 'row'.
 *
 */
void
nbrec_logical_router_update_static_routes_delvalue(const struct nbrec_logical_router *row, const struct nbrec_logical_router_static_route *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_router_col_static_routes,
                                    datum);
}

/* Sets the "enabled" column from the "Logical_Router" table in 'row' to
 * the 'enabled' set with 'n_enabled' entries.
 *
 * 'n_enabled' may be 0 or 1; if it is 0, then 'enabled'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_add_clause_enabled(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const bool *enabled, size_t n_enabled)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (n_enabled) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *enabled;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_router_col_enabled,
                          &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Router" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_router_add_clause_external_ids(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_logical_router_col_external_ids,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_logical_router_col_external_ids.type);
}


/* Sets the "load_balancer" column from the "Logical_Router" table in 'row' to
 * the 'load_balancer' set with 'n_load_balancer' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_add_clause_load_balancer(struct ovsdb_idl_condition *cond, enum ovsdb_function function, struct uuid **load_balancer, size_t n_load_balancer)
{
    struct ovsdb_datum datum;
    datum.n = n_load_balancer;
    datum.keys = n_load_balancer ? xmalloc(n_load_balancer * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_load_balancer; i++) {
        datum.keys[i].uuid = *load_balancer[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_router_col_load_balancer,
                          &datum);
    free(datum.keys);
}

/* Sets the "name" column from the "Logical_Router" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_add_clause_name(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_router_col_name,
                          &datum);
}

/* Sets the "nat" column from the "Logical_Router" table in 'row' to
 * the 'nat' set with 'n_nat' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_add_clause_nat(struct ovsdb_idl_condition *cond, enum ovsdb_function function, struct uuid **nat, size_t n_nat)
{
    struct ovsdb_datum datum;
    datum.n = n_nat;
    datum.keys = n_nat ? xmalloc(n_nat * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_nat; i++) {
        datum.keys[i].uuid = *nat[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_router_col_nat,
                          &datum);
    free(datum.keys);
}

/* Sets the "options" column's value from the "Logical_Router" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_logical_router_add_clause_options(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *options)
{
    struct ovsdb_datum datum;

    if (options) {
        ovsdb_datum_from_smap(&datum, options);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_logical_router_col_options,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_logical_router_col_options.type);
}


/* Sets the "ports" column from the "Logical_Router" table in 'row' to
 * the 'ports' set with 'n_ports' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_add_clause_ports(struct ovsdb_idl_condition *cond, enum ovsdb_function function, struct uuid **ports, size_t n_ports)
{
    struct ovsdb_datum datum;
    datum.n = n_ports;
    datum.keys = n_ports ? xmalloc(n_ports * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_ports; i++) {
        datum.keys[i].uuid = *ports[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_router_col_ports,
                          &datum);
    free(datum.keys);
}

/* Sets the "static_routes" column from the "Logical_Router" table in 'row' to
 * the 'static_routes' set with 'n_static_routes' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_add_clause_static_routes(struct ovsdb_idl_condition *cond, enum ovsdb_function function, struct uuid **static_routes, size_t n_static_routes)
{
    struct ovsdb_datum datum;
    datum.n = n_static_routes;
    datum.keys = n_static_routes ? xmalloc(n_static_routes * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_static_routes; i++) {
        datum.keys[i].uuid = *static_routes[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_router_col_static_routes,
                          &datum);
    free(datum.keys);
}

/* Destroy 'row' of kind "Logical_Router". The row must have been
 * created with ovsdb_idl_index_init_row.
 */
void
nbrec_logical_router_index_destroy_row(const struct nbrec_logical_router *row)
{
    ovsdb_idl_index_destroy_row__(&row->header_);
}
        

/* Creates a new row of kind "Logical_Router". */
struct nbrec_logical_router *
nbrec_logical_router_index_init_row(struct ovsdb_idl *idl, const struct ovsdb_idl_table_class *class)
{
    return (struct nbrec_logical_router *) ovsdb_idl_index_init_row(idl, class);
}

/*  This function is used to compare "nbrec_logical_router" records on table in iteration loops for compound-index operations.
    After been called, cursor point to current position in the index
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct "nbrec_logical_router" *const_data1,  const struct "nbrec_logical_router" *const_data2. Data to be compared.
    Return value: 0 if both data values are equal, -1 if first parameter is less than second and 1 otherwise. */
int
nbrec_logical_router_index_compare(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_logical_router *const_data1,  const struct nbrec_logical_router *const_data2)
{
    struct nbrec_logical_router *data1 = CONST_CAST(struct nbrec_logical_router *, const_data1);
    struct nbrec_logical_router *data2 = CONST_CAST(struct nbrec_logical_router *, const_data2);
    return ovsdb_idl_index_compare(cursor, &data1->header_, &data2->header_);
}

/*  This function is called to position the cursor at the first row in "nbrec_logical_router" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The first row in the corresponding index. */
const struct nbrec_logical_router *
nbrec_logical_router_index_first(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_logical_router_cast(ovsdb_idl_index_first(cursor));
}

/*  This function is called to position the cursor at the next row in "nbrec_logical_router" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The next row in the corresponding index. */
const struct nbrec_logical_router *
nbrec_logical_router_index_next(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_logical_router_cast(ovsdb_idl_index_next(cursor));
}

/*  This function is used to find the data of the row in "nbrec_logical_router" table that meet criteria with the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_logical_router *const_data. Data to be searched.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_logical_router *
nbrec_logical_router_index_find(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_logical_router *const_data)
{
    struct nbrec_logical_router *data = CONST_CAST(struct nbrec_logical_router *, const_data);
    return nbrec_logical_router_cast(ovsdb_idl_index_find(cursor, &data->header_));
}

/*  This function is used to set the cursor pointing to the row in "nbrec_logical_router" table that meet criteria of the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_logical_router *const_data. Data to be searched.
    Return value: The row in the corresponding index closest to the criteria. */
const struct nbrec_logical_router *
nbrec_logical_router_index_forward_to(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_logical_router *const_data)
{
    struct nbrec_logical_router *data = CONST_CAST(struct nbrec_logical_router *, const_data);
    return nbrec_logical_router_cast(ovsdb_idl_index_forward_to(cursor, &data->header_));
}

/*  This function is used to get the data of the row in the current position pointed by the cursor in
    "nbrec_logical_router" table.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_logical_router *
nbrec_logical_router_index_get_data(const struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_logical_router_cast(ovsdb_idl_index_data(CONST_CAST(struct ovsdb_idl_index_cursor *, cursor)));
}

/* Sets the "enabled" column from the "Logical_Router" table in 'row' to
 * the 'enabled' set with 'n_enabled' entries.
 *
 * 'n_enabled' may be 0 or 1; if it is 0, then 'enabled'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_index_set_enabled(const struct nbrec_logical_router *row, const bool *enabled, size_t n_enabled)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    if (n_enabled) {
        datum.n = 1;
        datum.keys = key;
        key->boolean = *enabled;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_router_columns[ NBREC_LOGICAL_ROUTER_COL_ENABLED ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER]);
}

/* Sets the "external_ids" column's value from the "Logical_Router" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_router_index_set_external_ids(const struct nbrec_logical_router *row, const struct smap *external_ids)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(external_ids);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_EXTERNAL_IDS],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER]);
}


/* Sets the "load_balancer" column from the "Logical_Router" table in 'row' to
 * the 'load_balancer' set with 'n_load_balancer' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_index_set_load_balancer(const struct nbrec_logical_router *row, struct nbrec_load_balancer **load_balancer, size_t n_load_balancer)
{
    struct ovsdb_datum datum;
    size_t i;

    datum.n = n_load_balancer;
    datum.keys = n_load_balancer ? xmalloc(n_load_balancer * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_load_balancer; i++) {
        datum.keys[i].uuid = load_balancer[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_router_columns[ NBREC_LOGICAL_ROUTER_COL_LOAD_BALANCER ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER]);
}

/* Sets the "name" column from the "Logical_Router" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_index_set_name(const struct nbrec_logical_router *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_router_columns[ NBREC_LOGICAL_ROUTER_COL_NAME ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER]);
}

/* Sets the "nat" column from the "Logical_Router" table in 'row' to
 * the 'nat' set with 'n_nat' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_index_set_nat(const struct nbrec_logical_router *row, struct nbrec_nat **nat, size_t n_nat)
{
    struct ovsdb_datum datum;
    size_t i;

    datum.n = n_nat;
    datum.keys = n_nat ? xmalloc(n_nat * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_nat; i++) {
        datum.keys[i].uuid = nat[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_router_columns[ NBREC_LOGICAL_ROUTER_COL_NAT ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER]);
}

/* Sets the "options" column's value from the "Logical_Router" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_logical_router_index_set_options(const struct nbrec_logical_router *row, const struct smap *options)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (options) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(options);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, options) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_OPTIONS],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER]);
}


/* Sets the "ports" column from the "Logical_Router" table in 'row' to
 * the 'ports' set with 'n_ports' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_index_set_ports(const struct nbrec_logical_router *row, struct nbrec_logical_router_port **ports, size_t n_ports)
{
    struct ovsdb_datum datum;
    size_t i;

    datum.n = n_ports;
    datum.keys = n_ports ? xmalloc(n_ports * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_ports; i++) {
        datum.keys[i].uuid = ports[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_router_columns[ NBREC_LOGICAL_ROUTER_COL_PORTS ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER]);
}

/* Sets the "static_routes" column from the "Logical_Router" table in 'row' to
 * the 'static_routes' set with 'n_static_routes' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_index_set_static_routes(const struct nbrec_logical_router *row, struct nbrec_logical_router_static_route **static_routes, size_t n_static_routes)
{
    struct ovsdb_datum datum;
    size_t i;

    datum.n = n_static_routes;
    datum.keys = n_static_routes ? xmalloc(n_static_routes * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_static_routes; i++) {
        datum.keys[i].uuid = static_routes[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_router_columns[ NBREC_LOGICAL_ROUTER_COL_STATIC_ROUTES ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER]);
}

struct ovsdb_idl_column nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_N_COLUMNS];

void
nbrec_logical_router_set_condition(struct ovsdb_idl *idl, struct ovsdb_idl_condition *condition)
{
    ovsdb_idl_set_condition(idl, &nbrec_table_logical_router, condition);
}

struct ovsdb_idl_column nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_N_COLUMNS] = {
    [NBREC_LOGICAL_ROUTER_COL_ENABLED] = {
         .name = "enabled",
         .type = {
            .key = {
               .type = OVSDB_TYPE_BOOLEAN,
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_logical_router_parse_enabled,
         .unparse = nbrec_logical_router_unparse_enabled,
    },

    [NBREC_LOGICAL_ROUTER_COL_EXTERNAL_IDS] = {
         .name = "external_ids",
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
         .parse = nbrec_logical_router_parse_external_ids,
         .unparse = nbrec_logical_router_unparse_external_ids,
    },

    [NBREC_LOGICAL_ROUTER_COL_LOAD_BALANCER] = {
         .name = "load_balancer",
         .type = {
            .key = {
               .type = OVSDB_TYPE_UUID,
               .u.uuid = { .refTableName = "Load_Balancer", .refType = OVSDB_REF_STRONG },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = UINT_MAX,
         },
         .mutable = true,
         .parse = nbrec_logical_router_parse_load_balancer,
         .unparse = nbrec_logical_router_unparse_load_balancer,
    },

    [NBREC_LOGICAL_ROUTER_COL_NAME] = {
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
         .parse = nbrec_logical_router_parse_name,
         .unparse = nbrec_logical_router_unparse_name,
    },

    [NBREC_LOGICAL_ROUTER_COL_NAT] = {
         .name = "nat",
         .type = {
            .key = {
               .type = OVSDB_TYPE_UUID,
               .u.uuid = { .refTableName = "NAT", .refType = OVSDB_REF_STRONG },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = UINT_MAX,
         },
         .mutable = true,
         .parse = nbrec_logical_router_parse_nat,
         .unparse = nbrec_logical_router_unparse_nat,
    },

    [NBREC_LOGICAL_ROUTER_COL_OPTIONS] = {
         .name = "options",
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
         .parse = nbrec_logical_router_parse_options,
         .unparse = nbrec_logical_router_unparse_options,
    },

    [NBREC_LOGICAL_ROUTER_COL_PORTS] = {
         .name = "ports",
         .type = {
            .key = {
               .type = OVSDB_TYPE_UUID,
               .u.uuid = { .refTableName = "Logical_Router_Port", .refType = OVSDB_REF_STRONG },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = UINT_MAX,
         },
         .mutable = true,
         .parse = nbrec_logical_router_parse_ports,
         .unparse = nbrec_logical_router_unparse_ports,
    },

    [NBREC_LOGICAL_ROUTER_COL_STATIC_ROUTES] = {
         .name = "static_routes",
         .type = {
            .key = {
               .type = OVSDB_TYPE_UUID,
               .u.uuid = { .refTableName = "Logical_Router_Static_Route", .refType = OVSDB_REF_STRONG },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = UINT_MAX,
         },
         .mutable = true,
         .parse = nbrec_logical_router_parse_static_routes,
         .unparse = nbrec_logical_router_unparse_static_routes,
    },

};

/* Logical_Router_Port table. */

static void
nbrec_logical_router_port_parse_enabled(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);
    size_t n = MIN(1, datum->n);
    row->enabled = NULL;
    row->n_enabled = 0;
    for (size_t i = 0; i < n; i++) {
        if (!row->n_enabled) {
            row->enabled = xmalloc(n * sizeof *row->enabled);
        }
        row->enabled[row->n_enabled] = datum->keys[i].boolean;
        row->n_enabled++;
    }
}

static void
nbrec_logical_router_port_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);
    smap_init(&row->external_ids);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_logical_router_port_parse_gateway_chassis(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);
    row->gateway_chassis = NULL;
    row->n_gateway_chassis = 0;
    for (size_t i = 0; i < datum->n; i++) {
        struct nbrec_gateway_chassis *keyRow = nbrec_gateway_chassis_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_gateway_chassis, &datum->keys[i].uuid));
        if (!keyRow) {
            continue;
        }
        if (!row->n_gateway_chassis) {
            row->gateway_chassis = xmalloc(datum->n * sizeof *row->gateway_chassis);
        }
        row->gateway_chassis[row->n_gateway_chassis] = keyRow;
        row->n_gateway_chassis++;
    }
}

static void
nbrec_logical_router_port_parse_mac(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);

    if (datum->n >= 1) {
        row->mac = datum->keys[0].string;
    } else {
        row->mac = "";
    }
}

static void
nbrec_logical_router_port_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);

    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
nbrec_logical_router_port_parse_networks(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);
    row->networks = NULL;
    row->n_networks = 0;
    for (size_t i = 0; i < datum->n; i++) {
        if (!row->n_networks) {
            row->networks = xmalloc(datum->n * sizeof *row->networks);
        }
        row->networks[row->n_networks] = datum->keys[i].string;
        row->n_networks++;
    }
}

static void
nbrec_logical_router_port_parse_options(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);
    smap_init(&row->options);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->options,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_logical_router_port_parse_peer(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);

    if (datum->n >= 1) {
        row->peer = datum->keys[0].string;
    } else {
        row->peer = NULL;
    }
}

static void
nbrec_logical_router_port_unparse_enabled(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);
    free(row->enabled);
}

static void
nbrec_logical_router_port_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);
    smap_destroy(&row->external_ids);
}

static void
nbrec_logical_router_port_unparse_gateway_chassis(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);
    free(row->gateway_chassis);
}

static void
nbrec_logical_router_port_unparse_mac(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_router_port_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_router_port_unparse_networks(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);
    free(row->networks);
}

static void
nbrec_logical_router_port_unparse_options(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);
    smap_destroy(&row->options);
}

static void
nbrec_logical_router_port_unparse_peer(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_router_port_init__(struct ovsdb_idl_row *row)
{
    nbrec_logical_router_port_init(nbrec_logical_router_port_cast(row));
}

/* Clears the contents of 'row' in table "Logical_Router_Port". */
void
nbrec_logical_router_port_init(struct nbrec_logical_router_port *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
    row->mac = "";
    row->name = "";
    smap_init(&row->options);
}

/* Searches table "Logical_Router_Port" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_logical_router_port *
nbrec_logical_router_port_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_logical_router_port_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_logical_router_port, uuid));
}

/* Returns a row in table "Logical_Router_Port" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_logical_router_port *
nbrec_logical_router_port_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_router_port_cast(ovsdb_idl_first_row(idl, &nbrec_table_logical_router_port));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_logical_router_port *
nbrec_logical_router_port_next(const struct nbrec_logical_router_port *row)
{
    return nbrec_logical_router_port_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_logical_router_port_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_logical_router_port);
}

unsigned int nbrec_logical_router_port_row_get_seqno(const struct nbrec_logical_router_port *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_logical_router_port *
nbrec_logical_router_port_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_router_port_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_logical_router_port));
}

const struct nbrec_logical_router_port
*nbrec_logical_router_port_track_get_next(const struct nbrec_logical_router_port *row)
{
    return nbrec_logical_router_port_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Logical_Router_Port".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_port_delete(const struct nbrec_logical_router_port *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Logical_Router_Port" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_logical_router_port *
nbrec_logical_router_port_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_logical_router_port_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_logical_router_port, NULL));
}

bool
nbrec_logical_router_port_is_updated(const struct nbrec_logical_router_port *row, enum nbrec_logical_router_port_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_logical_router_port_columns[column]);
}

/* Causes the original contents of column "enabled" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "enabled" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "enabled" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "enabled" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_port_insert()).
 *
 *   - If "enabled" has already been modified (with
 *     nbrec_logical_router_port_set_enabled()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_port_set_enabled() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_port_verify_enabled(const struct nbrec_logical_router_port *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_port_col_enabled);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_port_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_logical_router_port_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_port_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_port_verify_external_ids(const struct nbrec_logical_router_port *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_port_col_external_ids);
}

/* Causes the original contents of column "gateway_chassis" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "gateway_chassis" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "gateway_chassis" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "gateway_chassis" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_port_insert()).
 *
 *   - If "gateway_chassis" has already been modified (with
 *     nbrec_logical_router_port_set_gateway_chassis()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_port_set_gateway_chassis() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_port_verify_gateway_chassis(const struct nbrec_logical_router_port *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_port_col_gateway_chassis);
}

/* Causes the original contents of column "mac" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "mac" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "mac" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "mac" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_port_insert()).
 *
 *   - If "mac" has already been modified (with
 *     nbrec_logical_router_port_set_mac()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_port_set_mac() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_port_verify_mac(const struct nbrec_logical_router_port *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_port_col_mac);
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
 *     nbrec_logical_router_port_insert()).
 *
 *   - If "name" has already been modified (with
 *     nbrec_logical_router_port_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_port_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_port_verify_name(const struct nbrec_logical_router_port *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_port_col_name);
}

/* Causes the original contents of column "networks" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "networks" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "networks" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "networks" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_port_insert()).
 *
 *   - If "networks" has already been modified (with
 *     nbrec_logical_router_port_set_networks()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_port_set_networks() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_port_verify_networks(const struct nbrec_logical_router_port *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_port_col_networks);
}

/* Causes the original contents of column "options" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "options" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "options" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "options" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_port_insert()).
 *
 *   - If "options" has already been modified (with
 *     nbrec_logical_router_port_set_options()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_port_set_options() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_port_verify_options(const struct nbrec_logical_router_port *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_port_col_options);
}

/* Causes the original contents of column "peer" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "peer" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "peer" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "peer" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_port_insert()).
 *
 *   - If "peer" has already been modified (with
 *     nbrec_logical_router_port_set_peer()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_port_set_peer() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_port_verify_peer(const struct nbrec_logical_router_port *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_port_col_peer);
}

/* Returns the "enabled" column's value from the "Logical_Router_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes enabled's
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
 * directly through the "enabled" member in nbrec_logical_router_port. */
const struct ovsdb_datum *
nbrec_logical_router_port_get_enabled(const struct nbrec_logical_router_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_port_col_enabled);
}

/* Returns the "external_ids" column's value from the "Logical_Router_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
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
 * directly through the "external_ids" member in nbrec_logical_router_port. */
const struct ovsdb_datum *
nbrec_logical_router_port_get_external_ids(const struct nbrec_logical_router_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_port_col_external_ids);
}

/* Returns the "gateway_chassis" column's value from the "Logical_Router_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes gateway_chassis's
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
 * directly through the "gateway_chassis" member in nbrec_logical_router_port. */
const struct ovsdb_datum *
nbrec_logical_router_port_get_gateway_chassis(const struct nbrec_logical_router_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_port_col_gateway_chassis);
}

/* Returns the "mac" column's value from the "Logical_Router_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes mac's
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
 * directly through the "mac" member in nbrec_logical_router_port. */
const struct ovsdb_datum *
nbrec_logical_router_port_get_mac(const struct nbrec_logical_router_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_port_col_mac);
}

/* Returns the "name" column's value from the "Logical_Router_Port" table in 'row'
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
 * directly through the "name" member in nbrec_logical_router_port. */
const struct ovsdb_datum *
nbrec_logical_router_port_get_name(const struct nbrec_logical_router_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_port_col_name);
}

/* Returns the "networks" column's value from the "Logical_Router_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes networks's
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
 * directly through the "networks" member in nbrec_logical_router_port. */
const struct ovsdb_datum *
nbrec_logical_router_port_get_networks(const struct nbrec_logical_router_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_port_col_networks);
}

/* Returns the "options" column's value from the "Logical_Router_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes options's
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
 * directly through the "options" member in nbrec_logical_router_port. */
const struct ovsdb_datum *
nbrec_logical_router_port_get_options(const struct nbrec_logical_router_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_port_col_options);
}

/* Returns the "peer" column's value from the "Logical_Router_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes peer's
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
 * directly through the "peer" member in nbrec_logical_router_port. */
const struct ovsdb_datum *
nbrec_logical_router_port_get_peer(const struct nbrec_logical_router_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_port_col_peer);
}

/* Sets the "enabled" column from the "Logical_Router_Port" table in 'row' to
 * the 'enabled' set with 'n_enabled' entries.
 *
 * 'n_enabled' may be 0 or 1; if it is 0, then 'enabled'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_set_enabled(const struct nbrec_logical_router_port *row, const bool *enabled, size_t n_enabled)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (n_enabled) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *enabled;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_port_col_enabled, &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Router_Port" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_router_port_set_external_ids(const struct nbrec_logical_router_port *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_logical_router_port_col_external_ids,
                        &datum);
}


/* Sets the "gateway_chassis" column from the "Logical_Router_Port" table in 'row' to
 * the 'gateway_chassis' set with 'n_gateway_chassis' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_set_gateway_chassis(const struct nbrec_logical_router_port *row, struct nbrec_gateway_chassis **gateway_chassis, size_t n_gateway_chassis)
{
    struct ovsdb_datum datum;

    datum.n = n_gateway_chassis;
    datum.keys = n_gateway_chassis ? xmalloc(n_gateway_chassis * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_gateway_chassis; i++) {
        datum.keys[i].uuid = gateway_chassis[i]->header_.uuid;
    }
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_router_port_col_gateway_chassis, &datum);
}

/* Sets the "mac" column from the "Logical_Router_Port" table in 'row' to
 * 'mac'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_set_mac(const struct nbrec_logical_router_port *row, const char *mac)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, mac);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_port_col_mac, &datum);
}

/* Sets the "name" column from the "Logical_Router_Port" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_set_name(const struct nbrec_logical_router_port *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_port_col_name, &datum);
}

/* Sets the "networks" column from the "Logical_Router_Port" table in 'row' to
 * the 'networks' set with 'n_networks' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_set_networks(const struct nbrec_logical_router_port *row, const char **networks, size_t n_networks)
{
    struct ovsdb_datum datum;

    datum.n = n_networks;
    datum.keys = n_networks ? xmalloc(n_networks * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_networks; i++) {
        datum.keys[i].string = xstrdup(networks[i]);
    }
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_router_port_col_networks, &datum);
}

/* Sets the "options" column's value from the "Logical_Router_Port" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_logical_router_port_set_options(const struct nbrec_logical_router_port *row, const struct smap *options)
{
    struct ovsdb_datum datum;

    if (options) {
        ovsdb_datum_from_smap(&datum, options);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_logical_router_port_col_options,
                        &datum);
}


/* Sets the "peer" column from the "Logical_Router_Port" table in 'row' to
 * the 'peer' set.
 *
 * If "peer" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_set_peer(const struct nbrec_logical_router_port *row, const char *peer)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (peer) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, peer);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_port_col_peer, &datum);
}

/* Adds the value 'new_value' to the "enabled" set column from the "Logical_Router_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_router_port_update_enabled_addvalue(const struct nbrec_logical_router_port *row, bool new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].boolean = new_value;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_router_port_col_enabled,
                                    datum);
}

/* Deletes the value 'delete_value' from the "enabled" set column from the
 * "Logical_Router_Port" table in 'row'.
 *
 */
void
nbrec_logical_router_port_update_enabled_delvalue(const struct nbrec_logical_router_port *row, bool delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].boolean = delete_value;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_router_port_col_enabled,
                                    datum);
}

/* Sets an element of the "external_ids" map column from the "Logical_Router_Port" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_logical_router_port_update_external_ids_setkey(const struct nbrec_logical_router_port *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_logical_router_port_col_external_ids,
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "Logical_Router_Port" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_logical_router_port_update_external_ids_delkey(const struct nbrec_logical_router_port *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_logical_router_port_col_external_ids,
                                    datum);
}

/* Adds the value 'new_value' to the "gateway_chassis" set column from the "Logical_Router_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_router_port_update_gateway_chassis_addvalue(const struct nbrec_logical_router_port *row, const struct nbrec_gateway_chassis *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_router_port_col_gateway_chassis,
                                    datum);
}

/* Deletes the value 'delete_value' from the "gateway_chassis" set column from the
 * "Logical_Router_Port" table in 'row'.
 *
 */
void
nbrec_logical_router_port_update_gateway_chassis_delvalue(const struct nbrec_logical_router_port *row, const struct nbrec_gateway_chassis *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_router_port_col_gateway_chassis,
                                    datum);
}

/* Adds the value 'new_value' to the "networks" set column from the "Logical_Router_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_router_port_update_networks_addvalue(const struct nbrec_logical_router_port *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_router_port_col_networks,
                                    datum);
}

/* Deletes the value 'delete_value' from the "networks" set column from the
 * "Logical_Router_Port" table in 'row'.
 *
 */
void
nbrec_logical_router_port_update_networks_delvalue(const struct nbrec_logical_router_port *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_router_port_col_networks,
                                    datum);
}

/* Sets an element of the "options" map column from the "Logical_Router_Port" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_logical_router_port_update_options_setkey(const struct nbrec_logical_router_port *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_logical_router_port_col_options,
                                    datum);
}

/* Deletes an element of the "options" map column from the "Logical_Router_Port" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_logical_router_port_update_options_delkey(const struct nbrec_logical_router_port *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_logical_router_port_col_options,
                                    datum);
}

/* Adds the value 'new_value' to the "peer" set column from the "Logical_Router_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_router_port_update_peer_addvalue(const struct nbrec_logical_router_port *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_router_port_col_peer,
                                    datum);
}

/* Deletes the value 'delete_value' from the "peer" set column from the
 * "Logical_Router_Port" table in 'row'.
 *
 */
void
nbrec_logical_router_port_update_peer_delvalue(const struct nbrec_logical_router_port *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_router_port_col_peer,
                                    datum);
}

/* Sets the "enabled" column from the "Logical_Router_Port" table in 'row' to
 * the 'enabled' set with 'n_enabled' entries.
 *
 * 'n_enabled' may be 0 or 1; if it is 0, then 'enabled'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_add_clause_enabled(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const bool *enabled, size_t n_enabled)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (n_enabled) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *enabled;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_router_port_col_enabled,
                          &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Router_Port" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_router_port_add_clause_external_ids(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_logical_router_port_col_external_ids,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_logical_router_port_col_external_ids.type);
}


/* Sets the "gateway_chassis" column from the "Logical_Router_Port" table in 'row' to
 * the 'gateway_chassis' set with 'n_gateway_chassis' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_add_clause_gateway_chassis(struct ovsdb_idl_condition *cond, enum ovsdb_function function, struct uuid **gateway_chassis, size_t n_gateway_chassis)
{
    struct ovsdb_datum datum;
    datum.n = n_gateway_chassis;
    datum.keys = n_gateway_chassis ? xmalloc(n_gateway_chassis * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_gateway_chassis; i++) {
        datum.keys[i].uuid = *gateway_chassis[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_router_port_col_gateway_chassis,
                          &datum);
    free(datum.keys);
}

/* Sets the "mac" column from the "Logical_Router_Port" table in 'row' to
 * 'mac'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_add_clause_mac(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *mac)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, mac);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_router_port_col_mac,
                          &datum);
}

/* Sets the "name" column from the "Logical_Router_Port" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_add_clause_name(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_router_port_col_name,
                          &datum);
}

/* Sets the "networks" column from the "Logical_Router_Port" table in 'row' to
 * the 'networks' set with 'n_networks' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_add_clause_networks(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char **networks, size_t n_networks)
{
    struct ovsdb_datum datum;
    datum.n = n_networks;
    datum.keys = n_networks ? xmalloc(n_networks * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_networks; i++) {
        datum.keys[i].string = CONST_CAST(char *, networks[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_router_port_col_networks,
                          &datum);
    free(datum.keys);
}

/* Sets the "options" column's value from the "Logical_Router_Port" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_logical_router_port_add_clause_options(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *options)
{
    struct ovsdb_datum datum;

    if (options) {
        ovsdb_datum_from_smap(&datum, options);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_logical_router_port_col_options,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_logical_router_port_col_options.type);
}


/* Sets the "peer" column from the "Logical_Router_Port" table in 'row' to
 * the 'peer' set.
 *
 * If "peer" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_add_clause_peer(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *peer)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (peer) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, peer);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_router_port_col_peer,
                          &datum);
}

/* Destroy 'row' of kind "Logical_Router_Port". The row must have been
 * created with ovsdb_idl_index_init_row.
 */
void
nbrec_logical_router_port_index_destroy_row(const struct nbrec_logical_router_port *row)
{
    ovsdb_idl_index_destroy_row__(&row->header_);
}
        

/* Creates a new row of kind "Logical_Router_Port". */
struct nbrec_logical_router_port *
nbrec_logical_router_port_index_init_row(struct ovsdb_idl *idl, const struct ovsdb_idl_table_class *class)
{
    return (struct nbrec_logical_router_port *) ovsdb_idl_index_init_row(idl, class);
}

/*  This function is used to compare "nbrec_logical_router_port" records on table in iteration loops for compound-index operations.
    After been called, cursor point to current position in the index
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct "nbrec_logical_router_port" *const_data1,  const struct "nbrec_logical_router_port" *const_data2. Data to be compared.
    Return value: 0 if both data values are equal, -1 if first parameter is less than second and 1 otherwise. */
int
nbrec_logical_router_port_index_compare(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_logical_router_port *const_data1,  const struct nbrec_logical_router_port *const_data2)
{
    struct nbrec_logical_router_port *data1 = CONST_CAST(struct nbrec_logical_router_port *, const_data1);
    struct nbrec_logical_router_port *data2 = CONST_CAST(struct nbrec_logical_router_port *, const_data2);
    return ovsdb_idl_index_compare(cursor, &data1->header_, &data2->header_);
}

/*  This function is called to position the cursor at the first row in "nbrec_logical_router_port" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The first row in the corresponding index. */
const struct nbrec_logical_router_port *
nbrec_logical_router_port_index_first(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_logical_router_port_cast(ovsdb_idl_index_first(cursor));
}

/*  This function is called to position the cursor at the next row in "nbrec_logical_router_port" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The next row in the corresponding index. */
const struct nbrec_logical_router_port *
nbrec_logical_router_port_index_next(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_logical_router_port_cast(ovsdb_idl_index_next(cursor));
}

/*  This function is used to find the data of the row in "nbrec_logical_router_port" table that meet criteria with the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_logical_router_port *const_data. Data to be searched.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_logical_router_port *
nbrec_logical_router_port_index_find(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_logical_router_port *const_data)
{
    struct nbrec_logical_router_port *data = CONST_CAST(struct nbrec_logical_router_port *, const_data);
    return nbrec_logical_router_port_cast(ovsdb_idl_index_find(cursor, &data->header_));
}

/*  This function is used to set the cursor pointing to the row in "nbrec_logical_router_port" table that meet criteria of the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_logical_router_port *const_data. Data to be searched.
    Return value: The row in the corresponding index closest to the criteria. */
const struct nbrec_logical_router_port *
nbrec_logical_router_port_index_forward_to(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_logical_router_port *const_data)
{
    struct nbrec_logical_router_port *data = CONST_CAST(struct nbrec_logical_router_port *, const_data);
    return nbrec_logical_router_port_cast(ovsdb_idl_index_forward_to(cursor, &data->header_));
}

/*  This function is used to get the data of the row in the current position pointed by the cursor in
    "nbrec_logical_router_port" table.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_logical_router_port *
nbrec_logical_router_port_index_get_data(const struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_logical_router_port_cast(ovsdb_idl_index_data(CONST_CAST(struct ovsdb_idl_index_cursor *, cursor)));
}

/* Sets the "enabled" column from the "Logical_Router_Port" table in 'row' to
 * the 'enabled' set with 'n_enabled' entries.
 *
 * 'n_enabled' may be 0 or 1; if it is 0, then 'enabled'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_index_set_enabled(const struct nbrec_logical_router_port *row, const bool *enabled, size_t n_enabled)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    if (n_enabled) {
        datum.n = 1;
        datum.keys = key;
        key->boolean = *enabled;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_router_port_columns[ NBREC_LOGICAL_ROUTER_PORT_COL_ENABLED ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT]);
}

/* Sets the "external_ids" column's value from the "Logical_Router_Port" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_router_port_index_set_external_ids(const struct nbrec_logical_router_port *row, const struct smap *external_ids)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(external_ids);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_EXTERNAL_IDS],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT]);
}


/* Sets the "gateway_chassis" column from the "Logical_Router_Port" table in 'row' to
 * the 'gateway_chassis' set with 'n_gateway_chassis' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_index_set_gateway_chassis(const struct nbrec_logical_router_port *row, struct nbrec_gateway_chassis **gateway_chassis, size_t n_gateway_chassis)
{
    struct ovsdb_datum datum;
    size_t i;

    datum.n = n_gateway_chassis;
    datum.keys = n_gateway_chassis ? xmalloc(n_gateway_chassis * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_gateway_chassis; i++) {
        datum.keys[i].uuid = gateway_chassis[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_router_port_columns[ NBREC_LOGICAL_ROUTER_PORT_COL_GATEWAY_CHASSIS ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT]);
}

/* Sets the "mac" column from the "Logical_Router_Port" table in 'row' to
 * 'mac'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_index_set_mac(const struct nbrec_logical_router_port *row, const char *mac)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, mac);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_router_port_columns[ NBREC_LOGICAL_ROUTER_PORT_COL_MAC ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT]);
}

/* Sets the "name" column from the "Logical_Router_Port" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_index_set_name(const struct nbrec_logical_router_port *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_router_port_columns[ NBREC_LOGICAL_ROUTER_PORT_COL_NAME ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT]);
}

/* Sets the "networks" column from the "Logical_Router_Port" table in 'row' to
 * the 'networks' set with 'n_networks' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_index_set_networks(const struct nbrec_logical_router_port *row, const char **networks, size_t n_networks)
{
    struct ovsdb_datum datum;
    size_t i;

    datum.n = n_networks;
    datum.keys = n_networks ? xmalloc(n_networks * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_networks; i++) {
        datum.keys[i].string = xstrdup(networks[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_router_port_columns[ NBREC_LOGICAL_ROUTER_PORT_COL_NETWORKS ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT]);
}

/* Sets the "options" column's value from the "Logical_Router_Port" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_logical_router_port_index_set_options(const struct nbrec_logical_router_port *row, const struct smap *options)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (options) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(options);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, options) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_OPTIONS],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT]);
}


/* Sets the "peer" column from the "Logical_Router_Port" table in 'row' to
 * the 'peer' set.
 *
 * If "peer" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_index_set_peer(const struct nbrec_logical_router_port *row, const char *peer)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof (union ovsdb_atom));

    if (peer) {
        datum.n = 1;
        datum.keys = key;
        key->string = CONST_CAST(char *, peer);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_router_port_columns[ NBREC_LOGICAL_ROUTER_PORT_COL_PEER ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT]);
}

struct ovsdb_idl_column nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_N_COLUMNS];

void
nbrec_logical_router_port_set_condition(struct ovsdb_idl *idl, struct ovsdb_idl_condition *condition)
{
    ovsdb_idl_set_condition(idl, &nbrec_table_logical_router_port, condition);
}

struct ovsdb_idl_column nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_N_COLUMNS] = {
    [NBREC_LOGICAL_ROUTER_PORT_COL_ENABLED] = {
         .name = "enabled",
         .type = {
            .key = {
               .type = OVSDB_TYPE_BOOLEAN,
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_logical_router_port_parse_enabled,
         .unparse = nbrec_logical_router_port_unparse_enabled,
    },

    [NBREC_LOGICAL_ROUTER_PORT_COL_EXTERNAL_IDS] = {
         .name = "external_ids",
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
         .parse = nbrec_logical_router_port_parse_external_ids,
         .unparse = nbrec_logical_router_port_unparse_external_ids,
    },

    [NBREC_LOGICAL_ROUTER_PORT_COL_GATEWAY_CHASSIS] = {
         .name = "gateway_chassis",
         .type = {
            .key = {
               .type = OVSDB_TYPE_UUID,
               .u.uuid = { .refTableName = "Gateway_Chassis", .refType = OVSDB_REF_STRONG },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = UINT_MAX,
         },
         .mutable = true,
         .parse = nbrec_logical_router_port_parse_gateway_chassis,
         .unparse = nbrec_logical_router_port_unparse_gateway_chassis,
    },

    [NBREC_LOGICAL_ROUTER_PORT_COL_MAC] = {
         .name = "mac",
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
         .parse = nbrec_logical_router_port_parse_mac,
         .unparse = nbrec_logical_router_port_unparse_mac,
    },

    [NBREC_LOGICAL_ROUTER_PORT_COL_NAME] = {
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
         .parse = nbrec_logical_router_port_parse_name,
         .unparse = nbrec_logical_router_port_unparse_name,
    },

    [NBREC_LOGICAL_ROUTER_PORT_COL_NETWORKS] = {
         .name = "networks",
         .type = {
            .key = {
               .type = OVSDB_TYPE_STRING,
               .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 1,
            .n_max = UINT_MAX,
         },
         .mutable = true,
         .parse = nbrec_logical_router_port_parse_networks,
         .unparse = nbrec_logical_router_port_unparse_networks,
    },

    [NBREC_LOGICAL_ROUTER_PORT_COL_OPTIONS] = {
         .name = "options",
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
         .parse = nbrec_logical_router_port_parse_options,
         .unparse = nbrec_logical_router_port_unparse_options,
    },

    [NBREC_LOGICAL_ROUTER_PORT_COL_PEER] = {
         .name = "peer",
         .type = {
            .key = {
               .type = OVSDB_TYPE_STRING,
               .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_logical_router_port_parse_peer,
         .unparse = nbrec_logical_router_port_unparse_peer,
    },

};

/* Logical_Router_Static_Route table. */

static void
nbrec_logical_router_static_route_parse_ip_prefix(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_static_route *row = nbrec_logical_router_static_route_cast(row_);

    if (datum->n >= 1) {
        row->ip_prefix = datum->keys[0].string;
    } else {
        row->ip_prefix = "";
    }
}

static void
nbrec_logical_router_static_route_parse_nexthop(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_static_route *row = nbrec_logical_router_static_route_cast(row_);

    if (datum->n >= 1) {
        row->nexthop = datum->keys[0].string;
    } else {
        row->nexthop = "";
    }
}

static void
nbrec_logical_router_static_route_parse_output_port(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_static_route *row = nbrec_logical_router_static_route_cast(row_);

    if (datum->n >= 1) {
        row->output_port = datum->keys[0].string;
    } else {
        row->output_port = NULL;
    }
}

static void
nbrec_logical_router_static_route_parse_policy(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_static_route *row = nbrec_logical_router_static_route_cast(row_);

    if (datum->n >= 1) {
        row->policy = datum->keys[0].string;
    } else {
        row->policy = NULL;
    }
}

static void
nbrec_logical_router_static_route_unparse_ip_prefix(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_router_static_route_unparse_nexthop(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_router_static_route_unparse_output_port(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_router_static_route_unparse_policy(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_router_static_route_init__(struct ovsdb_idl_row *row)
{
    nbrec_logical_router_static_route_init(nbrec_logical_router_static_route_cast(row));
}

/* Clears the contents of 'row' in table "Logical_Router_Static_Route". */
void
nbrec_logical_router_static_route_init(struct nbrec_logical_router_static_route *row)
{
    memset(row, 0, sizeof *row); 
    row->ip_prefix = "";
    row->nexthop = "";
}

/* Searches table "Logical_Router_Static_Route" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_logical_router_static_route *
nbrec_logical_router_static_route_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_logical_router_static_route_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_logical_router_static_route, uuid));
}

/* Returns a row in table "Logical_Router_Static_Route" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_logical_router_static_route *
nbrec_logical_router_static_route_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_router_static_route_cast(ovsdb_idl_first_row(idl, &nbrec_table_logical_router_static_route));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_logical_router_static_route *
nbrec_logical_router_static_route_next(const struct nbrec_logical_router_static_route *row)
{
    return nbrec_logical_router_static_route_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_logical_router_static_route_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_logical_router_static_route);
}

unsigned int nbrec_logical_router_static_route_row_get_seqno(const struct nbrec_logical_router_static_route *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_logical_router_static_route *
nbrec_logical_router_static_route_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_router_static_route_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_logical_router_static_route));
}

const struct nbrec_logical_router_static_route
*nbrec_logical_router_static_route_track_get_next(const struct nbrec_logical_router_static_route *row)
{
    return nbrec_logical_router_static_route_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Logical_Router_Static_Route".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_static_route_delete(const struct nbrec_logical_router_static_route *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Logical_Router_Static_Route" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_logical_router_static_route *
nbrec_logical_router_static_route_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_logical_router_static_route_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_logical_router_static_route, NULL));
}

bool
nbrec_logical_router_static_route_is_updated(const struct nbrec_logical_router_static_route *row, enum nbrec_logical_router_static_route_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_logical_router_static_route_columns[column]);
}

/* Causes the original contents of column "ip_prefix" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ip_prefix" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ip_prefix" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ip_prefix" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_static_route_insert()).
 *
 *   - If "ip_prefix" has already been modified (with
 *     nbrec_logical_router_static_route_set_ip_prefix()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_static_route_set_ip_prefix() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_static_route_verify_ip_prefix(const struct nbrec_logical_router_static_route *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_static_route_col_ip_prefix);
}

/* Causes the original contents of column "nexthop" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "nexthop" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "nexthop" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "nexthop" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_static_route_insert()).
 *
 *   - If "nexthop" has already been modified (with
 *     nbrec_logical_router_static_route_set_nexthop()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_static_route_set_nexthop() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_static_route_verify_nexthop(const struct nbrec_logical_router_static_route *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_static_route_col_nexthop);
}

/* Causes the original contents of column "output_port" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "output_port" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "output_port" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "output_port" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_static_route_insert()).
 *
 *   - If "output_port" has already been modified (with
 *     nbrec_logical_router_static_route_set_output_port()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_static_route_set_output_port() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_static_route_verify_output_port(const struct nbrec_logical_router_static_route *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_static_route_col_output_port);
}

/* Causes the original contents of column "policy" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "policy" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "policy" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "policy" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_static_route_insert()).
 *
 *   - If "policy" has already been modified (with
 *     nbrec_logical_router_static_route_set_policy()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_static_route_set_policy() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_static_route_verify_policy(const struct nbrec_logical_router_static_route *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_static_route_col_policy);
}

/* Returns the "ip_prefix" column's value from the "Logical_Router_Static_Route" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes ip_prefix's
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
 * directly through the "ip_prefix" member in nbrec_logical_router_static_route. */
const struct ovsdb_datum *
nbrec_logical_router_static_route_get_ip_prefix(const struct nbrec_logical_router_static_route *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_static_route_col_ip_prefix);
}

/* Returns the "nexthop" column's value from the "Logical_Router_Static_Route" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes nexthop's
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
 * directly through the "nexthop" member in nbrec_logical_router_static_route. */
const struct ovsdb_datum *
nbrec_logical_router_static_route_get_nexthop(const struct nbrec_logical_router_static_route *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_static_route_col_nexthop);
}

/* Returns the "output_port" column's value from the "Logical_Router_Static_Route" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes output_port's
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
 * directly through the "output_port" member in nbrec_logical_router_static_route. */
const struct ovsdb_datum *
nbrec_logical_router_static_route_get_output_port(const struct nbrec_logical_router_static_route *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_static_route_col_output_port);
}

/* Returns the "policy" column's value from the "Logical_Router_Static_Route" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes policy's
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
 * directly through the "policy" member in nbrec_logical_router_static_route. */
const struct ovsdb_datum *
nbrec_logical_router_static_route_get_policy(const struct nbrec_logical_router_static_route *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_static_route_col_policy);
}

/* Sets the "ip_prefix" column from the "Logical_Router_Static_Route" table in 'row' to
 * 'ip_prefix'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_static_route_set_ip_prefix(const struct nbrec_logical_router_static_route *row, const char *ip_prefix)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, ip_prefix);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_static_route_col_ip_prefix, &datum);
}

/* Sets the "nexthop" column from the "Logical_Router_Static_Route" table in 'row' to
 * 'nexthop'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_static_route_set_nexthop(const struct nbrec_logical_router_static_route *row, const char *nexthop)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, nexthop);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_static_route_col_nexthop, &datum);
}

/* Sets the "output_port" column from the "Logical_Router_Static_Route" table in 'row' to
 * the 'output_port' set.
 *
 * If "output_port" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_static_route_set_output_port(const struct nbrec_logical_router_static_route *row, const char *output_port)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (output_port) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, output_port);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_static_route_col_output_port, &datum);
}

/* Sets the "policy" column from the "Logical_Router_Static_Route" table in 'row' to
 * the 'policy' set.
 *
 * If "policy" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: either "dst-ip" or "src-ip"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_static_route_set_policy(const struct nbrec_logical_router_static_route *row, const char *policy)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (policy) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, policy);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_static_route_col_policy, &datum);
}

/* Adds the value 'new_value' to the "output_port" set column from the "Logical_Router_Static_Route" table
 * in 'row'.
 *
 */
void
nbrec_logical_router_static_route_update_output_port_addvalue(const struct nbrec_logical_router_static_route *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_router_static_route_col_output_port,
                                    datum);
}

/* Deletes the value 'delete_value' from the "output_port" set column from the
 * "Logical_Router_Static_Route" table in 'row'.
 *
 */
void
nbrec_logical_router_static_route_update_output_port_delvalue(const struct nbrec_logical_router_static_route *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_router_static_route_col_output_port,
                                    datum);
}

/* Adds the value 'new_value' to the "policy" set column from the "Logical_Router_Static_Route" table
 * in 'row'.
 *
 */
void
nbrec_logical_router_static_route_update_policy_addvalue(const struct nbrec_logical_router_static_route *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_router_static_route_col_policy,
                                    datum);
}

/* Deletes the value 'delete_value' from the "policy" set column from the
 * "Logical_Router_Static_Route" table in 'row'.
 *
 */
void
nbrec_logical_router_static_route_update_policy_delvalue(const struct nbrec_logical_router_static_route *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_router_static_route_col_policy,
                                    datum);
}

/* Sets the "ip_prefix" column from the "Logical_Router_Static_Route" table in 'row' to
 * 'ip_prefix'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_static_route_add_clause_ip_prefix(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *ip_prefix)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, ip_prefix);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_router_static_route_col_ip_prefix,
                          &datum);
}

/* Sets the "nexthop" column from the "Logical_Router_Static_Route" table in 'row' to
 * 'nexthop'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_static_route_add_clause_nexthop(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *nexthop)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, nexthop);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_router_static_route_col_nexthop,
                          &datum);
}

/* Sets the "output_port" column from the "Logical_Router_Static_Route" table in 'row' to
 * the 'output_port' set.
 *
 * If "output_port" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_static_route_add_clause_output_port(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *output_port)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (output_port) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, output_port);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_router_static_route_col_output_port,
                          &datum);
}

/* Sets the "policy" column from the "Logical_Router_Static_Route" table in 'row' to
 * the 'policy' set.
 *
 * If "policy" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: either "dst-ip" or "src-ip"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_static_route_add_clause_policy(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *policy)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (policy) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, policy);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_router_static_route_col_policy,
                          &datum);
}

/* Destroy 'row' of kind "Logical_Router_Static_Route". The row must have been
 * created with ovsdb_idl_index_init_row.
 */
void
nbrec_logical_router_static_route_index_destroy_row(const struct nbrec_logical_router_static_route *row)
{
    ovsdb_idl_index_destroy_row__(&row->header_);
}
        

/* Creates a new row of kind "Logical_Router_Static_Route". */
struct nbrec_logical_router_static_route *
nbrec_logical_router_static_route_index_init_row(struct ovsdb_idl *idl, const struct ovsdb_idl_table_class *class)
{
    return (struct nbrec_logical_router_static_route *) ovsdb_idl_index_init_row(idl, class);
}

/*  This function is used to compare "nbrec_logical_router_static_route" records on table in iteration loops for compound-index operations.
    After been called, cursor point to current position in the index
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct "nbrec_logical_router_static_route" *const_data1,  const struct "nbrec_logical_router_static_route" *const_data2. Data to be compared.
    Return value: 0 if both data values are equal, -1 if first parameter is less than second and 1 otherwise. */
int
nbrec_logical_router_static_route_index_compare(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_logical_router_static_route *const_data1,  const struct nbrec_logical_router_static_route *const_data2)
{
    struct nbrec_logical_router_static_route *data1 = CONST_CAST(struct nbrec_logical_router_static_route *, const_data1);
    struct nbrec_logical_router_static_route *data2 = CONST_CAST(struct nbrec_logical_router_static_route *, const_data2);
    return ovsdb_idl_index_compare(cursor, &data1->header_, &data2->header_);
}

/*  This function is called to position the cursor at the first row in "nbrec_logical_router_static_route" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The first row in the corresponding index. */
const struct nbrec_logical_router_static_route *
nbrec_logical_router_static_route_index_first(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_logical_router_static_route_cast(ovsdb_idl_index_first(cursor));
}

/*  This function is called to position the cursor at the next row in "nbrec_logical_router_static_route" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The next row in the corresponding index. */
const struct nbrec_logical_router_static_route *
nbrec_logical_router_static_route_index_next(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_logical_router_static_route_cast(ovsdb_idl_index_next(cursor));
}

/*  This function is used to find the data of the row in "nbrec_logical_router_static_route" table that meet criteria with the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_logical_router_static_route *const_data. Data to be searched.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_logical_router_static_route *
nbrec_logical_router_static_route_index_find(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_logical_router_static_route *const_data)
{
    struct nbrec_logical_router_static_route *data = CONST_CAST(struct nbrec_logical_router_static_route *, const_data);
    return nbrec_logical_router_static_route_cast(ovsdb_idl_index_find(cursor, &data->header_));
}

/*  This function is used to set the cursor pointing to the row in "nbrec_logical_router_static_route" table that meet criteria of the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_logical_router_static_route *const_data. Data to be searched.
    Return value: The row in the corresponding index closest to the criteria. */
const struct nbrec_logical_router_static_route *
nbrec_logical_router_static_route_index_forward_to(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_logical_router_static_route *const_data)
{
    struct nbrec_logical_router_static_route *data = CONST_CAST(struct nbrec_logical_router_static_route *, const_data);
    return nbrec_logical_router_static_route_cast(ovsdb_idl_index_forward_to(cursor, &data->header_));
}

/*  This function is used to get the data of the row in the current position pointed by the cursor in
    "nbrec_logical_router_static_route" table.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_logical_router_static_route *
nbrec_logical_router_static_route_index_get_data(const struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_logical_router_static_route_cast(ovsdb_idl_index_data(CONST_CAST(struct ovsdb_idl_index_cursor *, cursor)));
}

/* Sets the "ip_prefix" column from the "Logical_Router_Static_Route" table in 'row' to
 * 'ip_prefix'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_static_route_index_set_ip_prefix(const struct nbrec_logical_router_static_route *row, const char *ip_prefix)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, ip_prefix);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_router_static_route_columns[ NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_IP_PREFIX ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE]);
}

/* Sets the "nexthop" column from the "Logical_Router_Static_Route" table in 'row' to
 * 'nexthop'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_static_route_index_set_nexthop(const struct nbrec_logical_router_static_route *row, const char *nexthop)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, nexthop);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_router_static_route_columns[ NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_NEXTHOP ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE]);
}

/* Sets the "output_port" column from the "Logical_Router_Static_Route" table in 'row' to
 * the 'output_port' set.
 *
 * If "output_port" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_static_route_index_set_output_port(const struct nbrec_logical_router_static_route *row, const char *output_port)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof (union ovsdb_atom));

    if (output_port) {
        datum.n = 1;
        datum.keys = key;
        key->string = CONST_CAST(char *, output_port);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_router_static_route_columns[ NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_OUTPUT_PORT ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE]);
}

/* Sets the "policy" column from the "Logical_Router_Static_Route" table in 'row' to
 * the 'policy' set.
 *
 * If "policy" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: either "dst-ip" or "src-ip"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_static_route_index_set_policy(const struct nbrec_logical_router_static_route *row, const char *policy)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof (union ovsdb_atom));

    if (policy) {
        datum.n = 1;
        datum.keys = key;
        key->string = CONST_CAST(char *, policy);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_router_static_route_columns[ NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_POLICY ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE]);
}

struct ovsdb_idl_column nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_N_COLUMNS];

void
nbrec_logical_router_static_route_set_condition(struct ovsdb_idl *idl, struct ovsdb_idl_condition *condition)
{
    ovsdb_idl_set_condition(idl, &nbrec_table_logical_router_static_route, condition);
}
static union ovsdb_atom Logical_Router_Static_Route_col_policy_key_enum_keys[2] = {
    { .string = "dst-ip" },
    { .string = "src-ip" },
};
static struct ovsdb_datum Logical_Router_Static_Route_col_policy_key_enum = {
    .n = 2,
    .keys = Logical_Router_Static_Route_col_policy_key_enum_keys,
};

struct ovsdb_idl_column nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_N_COLUMNS] = {
    [NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_IP_PREFIX] = {
         .name = "ip_prefix",
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
         .parse = nbrec_logical_router_static_route_parse_ip_prefix,
         .unparse = nbrec_logical_router_static_route_unparse_ip_prefix,
    },

    [NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_NEXTHOP] = {
         .name = "nexthop",
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
         .parse = nbrec_logical_router_static_route_parse_nexthop,
         .unparse = nbrec_logical_router_static_route_unparse_nexthop,
    },

    [NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_OUTPUT_PORT] = {
         .name = "output_port",
         .type = {
            .key = {
               .type = OVSDB_TYPE_STRING,
               .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_logical_router_static_route_parse_output_port,
         .unparse = nbrec_logical_router_static_route_unparse_output_port,
    },

    [NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_POLICY] = {
         .name = "policy",
         .type = {
            .key = {
               .type = OVSDB_TYPE_STRING,
               .enum_ = &Logical_Router_Static_Route_col_policy_key_enum,
               .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_logical_router_static_route_parse_policy,
         .unparse = nbrec_logical_router_static_route_unparse_policy,
    },

};

/* Logical_Switch table. */

static void
nbrec_logical_switch_parse_acls(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);
    row->acls = NULL;
    row->n_acls = 0;
    for (size_t i = 0; i < datum->n; i++) {
        struct nbrec_acl *keyRow = nbrec_acl_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_acl, &datum->keys[i].uuid));
        if (!keyRow) {
            continue;
        }
        if (!row->n_acls) {
            row->acls = xmalloc(datum->n * sizeof *row->acls);
        }
        row->acls[row->n_acls] = keyRow;
        row->n_acls++;
    }
}

static void
nbrec_logical_switch_parse_dns_records(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);
    row->dns_records = NULL;
    row->n_dns_records = 0;
    for (size_t i = 0; i < datum->n; i++) {
        struct nbrec_dns *keyRow = nbrec_dns_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_dns, &datum->keys[i].uuid));
        if (!keyRow) {
            continue;
        }
        if (!row->n_dns_records) {
            row->dns_records = xmalloc(datum->n * sizeof *row->dns_records);
        }
        row->dns_records[row->n_dns_records] = keyRow;
        row->n_dns_records++;
    }
}

static void
nbrec_logical_switch_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);
    smap_init(&row->external_ids);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_logical_switch_parse_load_balancer(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);
    row->load_balancer = NULL;
    row->n_load_balancer = 0;
    for (size_t i = 0; i < datum->n; i++) {
        struct nbrec_load_balancer *keyRow = nbrec_load_balancer_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_load_balancer, &datum->keys[i].uuid));
        if (!keyRow) {
            continue;
        }
        if (!row->n_load_balancer) {
            row->load_balancer = xmalloc(datum->n * sizeof *row->load_balancer);
        }
        row->load_balancer[row->n_load_balancer] = keyRow;
        row->n_load_balancer++;
    }
}

static void
nbrec_logical_switch_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);

    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
nbrec_logical_switch_parse_other_config(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);
    smap_init(&row->other_config);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->other_config,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_logical_switch_parse_ports(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);
    row->ports = NULL;
    row->n_ports = 0;
    for (size_t i = 0; i < datum->n; i++) {
        struct nbrec_logical_switch_port *keyRow = nbrec_logical_switch_port_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_logical_switch_port, &datum->keys[i].uuid));
        if (!keyRow) {
            continue;
        }
        if (!row->n_ports) {
            row->ports = xmalloc(datum->n * sizeof *row->ports);
        }
        row->ports[row->n_ports] = keyRow;
        row->n_ports++;
    }
}

static void
nbrec_logical_switch_parse_qos_rules(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);
    row->qos_rules = NULL;
    row->n_qos_rules = 0;
    for (size_t i = 0; i < datum->n; i++) {
        struct nbrec_qos *keyRow = nbrec_qos_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_qos, &datum->keys[i].uuid));
        if (!keyRow) {
            continue;
        }
        if (!row->n_qos_rules) {
            row->qos_rules = xmalloc(datum->n * sizeof *row->qos_rules);
        }
        row->qos_rules[row->n_qos_rules] = keyRow;
        row->n_qos_rules++;
    }
}

static void
nbrec_logical_switch_unparse_acls(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);
    free(row->acls);
}

static void
nbrec_logical_switch_unparse_dns_records(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);
    free(row->dns_records);
}

static void
nbrec_logical_switch_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);
    smap_destroy(&row->external_ids);
}

static void
nbrec_logical_switch_unparse_load_balancer(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);
    free(row->load_balancer);
}

static void
nbrec_logical_switch_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_switch_unparse_other_config(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);
    smap_destroy(&row->other_config);
}

static void
nbrec_logical_switch_unparse_ports(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);
    free(row->ports);
}

static void
nbrec_logical_switch_unparse_qos_rules(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);
    free(row->qos_rules);
}

static void
nbrec_logical_switch_init__(struct ovsdb_idl_row *row)
{
    nbrec_logical_switch_init(nbrec_logical_switch_cast(row));
}

/* Clears the contents of 'row' in table "Logical_Switch". */
void
nbrec_logical_switch_init(struct nbrec_logical_switch *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
    row->name = "";
    smap_init(&row->other_config);
}

/* Searches table "Logical_Switch" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_logical_switch *
nbrec_logical_switch_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_logical_switch_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_logical_switch, uuid));
}

/* Returns a row in table "Logical_Switch" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_logical_switch *
nbrec_logical_switch_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_switch_cast(ovsdb_idl_first_row(idl, &nbrec_table_logical_switch));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_logical_switch *
nbrec_logical_switch_next(const struct nbrec_logical_switch *row)
{
    return nbrec_logical_switch_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_logical_switch_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_logical_switch);
}

unsigned int nbrec_logical_switch_row_get_seqno(const struct nbrec_logical_switch *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_logical_switch *
nbrec_logical_switch_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_switch_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_logical_switch));
}

const struct nbrec_logical_switch
*nbrec_logical_switch_track_get_next(const struct nbrec_logical_switch *row)
{
    return nbrec_logical_switch_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Logical_Switch".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_delete(const struct nbrec_logical_switch *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Logical_Switch" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_logical_switch *
nbrec_logical_switch_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_logical_switch_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_logical_switch, NULL));
}

bool
nbrec_logical_switch_is_updated(const struct nbrec_logical_switch *row, enum nbrec_logical_switch_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_logical_switch_columns[column]);
}

/* Causes the original contents of column "acls" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "acls" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "acls" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "acls" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_insert()).
 *
 *   - If "acls" has already been modified (with
 *     nbrec_logical_switch_set_acls()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_set_acls() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_verify_acls(const struct nbrec_logical_switch *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_col_acls);
}

/* Causes the original contents of column "dns_records" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "dns_records" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "dns_records" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "dns_records" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_insert()).
 *
 *   - If "dns_records" has already been modified (with
 *     nbrec_logical_switch_set_dns_records()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_set_dns_records() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_verify_dns_records(const struct nbrec_logical_switch *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_col_dns_records);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_logical_switch_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_verify_external_ids(const struct nbrec_logical_switch *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_col_external_ids);
}

/* Causes the original contents of column "load_balancer" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "load_balancer" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "load_balancer" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "load_balancer" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_insert()).
 *
 *   - If "load_balancer" has already been modified (with
 *     nbrec_logical_switch_set_load_balancer()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_set_load_balancer() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_verify_load_balancer(const struct nbrec_logical_switch *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_col_load_balancer);
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
 *     nbrec_logical_switch_insert()).
 *
 *   - If "name" has already been modified (with
 *     nbrec_logical_switch_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_verify_name(const struct nbrec_logical_switch *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_col_name);
}

/* Causes the original contents of column "other_config" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "other_config" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "other_config" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "other_config" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_insert()).
 *
 *   - If "other_config" has already been modified (with
 *     nbrec_logical_switch_set_other_config()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_set_other_config() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_verify_other_config(const struct nbrec_logical_switch *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_col_other_config);
}

/* Causes the original contents of column "ports" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ports" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ports" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ports" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_insert()).
 *
 *   - If "ports" has already been modified (with
 *     nbrec_logical_switch_set_ports()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_set_ports() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_verify_ports(const struct nbrec_logical_switch *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_col_ports);
}

/* Causes the original contents of column "qos_rules" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "qos_rules" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "qos_rules" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "qos_rules" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_insert()).
 *
 *   - If "qos_rules" has already been modified (with
 *     nbrec_logical_switch_set_qos_rules()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_set_qos_rules() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_verify_qos_rules(const struct nbrec_logical_switch *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_col_qos_rules);
}

/* Returns the "acls" column's value from the "Logical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes acls's
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
 * directly through the "acls" member in nbrec_logical_switch. */
const struct ovsdb_datum *
nbrec_logical_switch_get_acls(const struct nbrec_logical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_col_acls);
}

/* Returns the "dns_records" column's value from the "Logical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes dns_records's
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
 * directly through the "dns_records" member in nbrec_logical_switch. */
const struct ovsdb_datum *
nbrec_logical_switch_get_dns_records(const struct nbrec_logical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_col_dns_records);
}

/* Returns the "external_ids" column's value from the "Logical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
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
 * directly through the "external_ids" member in nbrec_logical_switch. */
const struct ovsdb_datum *
nbrec_logical_switch_get_external_ids(const struct nbrec_logical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_col_external_ids);
}

/* Returns the "load_balancer" column's value from the "Logical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes load_balancer's
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
 * directly through the "load_balancer" member in nbrec_logical_switch. */
const struct ovsdb_datum *
nbrec_logical_switch_get_load_balancer(const struct nbrec_logical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_col_load_balancer);
}

/* Returns the "name" column's value from the "Logical_Switch" table in 'row'
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
 * directly through the "name" member in nbrec_logical_switch. */
const struct ovsdb_datum *
nbrec_logical_switch_get_name(const struct nbrec_logical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_col_name);
}

/* Returns the "other_config" column's value from the "Logical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes other_config's
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
 * directly through the "other_config" member in nbrec_logical_switch. */
const struct ovsdb_datum *
nbrec_logical_switch_get_other_config(const struct nbrec_logical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_col_other_config);
}

/* Returns the "ports" column's value from the "Logical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes ports's
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
 * directly through the "ports" member in nbrec_logical_switch. */
const struct ovsdb_datum *
nbrec_logical_switch_get_ports(const struct nbrec_logical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_col_ports);
}

/* Returns the "qos_rules" column's value from the "Logical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes qos_rules's
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
 * directly through the "qos_rules" member in nbrec_logical_switch. */
const struct ovsdb_datum *
nbrec_logical_switch_get_qos_rules(const struct nbrec_logical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_col_qos_rules);
}

/* Sets the "acls" column from the "Logical_Switch" table in 'row' to
 * the 'acls' set with 'n_acls' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_set_acls(const struct nbrec_logical_switch *row, struct nbrec_acl **acls, size_t n_acls)
{
    struct ovsdb_datum datum;

    datum.n = n_acls;
    datum.keys = n_acls ? xmalloc(n_acls * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_acls; i++) {
        datum.keys[i].uuid = acls[i]->header_.uuid;
    }
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_switch_col_acls, &datum);
}

/* Sets the "dns_records" column from the "Logical_Switch" table in 'row' to
 * the 'dns_records' set with 'n_dns_records' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_set_dns_records(const struct nbrec_logical_switch *row, struct nbrec_dns **dns_records, size_t n_dns_records)
{
    struct ovsdb_datum datum;

    datum.n = n_dns_records;
    datum.keys = n_dns_records ? xmalloc(n_dns_records * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_dns_records; i++) {
        datum.keys[i].uuid = dns_records[i]->header_.uuid;
    }
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_switch_col_dns_records, &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Switch" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_switch_set_external_ids(const struct nbrec_logical_switch *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_logical_switch_col_external_ids,
                        &datum);
}


/* Sets the "load_balancer" column from the "Logical_Switch" table in 'row' to
 * the 'load_balancer' set with 'n_load_balancer' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_set_load_balancer(const struct nbrec_logical_switch *row, struct nbrec_load_balancer **load_balancer, size_t n_load_balancer)
{
    struct ovsdb_datum datum;

    datum.n = n_load_balancer;
    datum.keys = n_load_balancer ? xmalloc(n_load_balancer * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_load_balancer; i++) {
        datum.keys[i].uuid = load_balancer[i]->header_.uuid;
    }
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_switch_col_load_balancer, &datum);
}

/* Sets the "name" column from the "Logical_Switch" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_set_name(const struct nbrec_logical_switch *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_switch_col_name, &datum);
}

/* Sets the "other_config" column's value from the "Logical_Switch" table in 'row'
 * to 'other_config'.
 *
 * The caller retains ownership of 'other_config' and everything in it. */
void
nbrec_logical_switch_set_other_config(const struct nbrec_logical_switch *row, const struct smap *other_config)
{
    struct ovsdb_datum datum;

    if (other_config) {
        ovsdb_datum_from_smap(&datum, other_config);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_logical_switch_col_other_config,
                        &datum);
}


/* Sets the "ports" column from the "Logical_Switch" table in 'row' to
 * the 'ports' set with 'n_ports' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_set_ports(const struct nbrec_logical_switch *row, struct nbrec_logical_switch_port **ports, size_t n_ports)
{
    struct ovsdb_datum datum;

    datum.n = n_ports;
    datum.keys = n_ports ? xmalloc(n_ports * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_ports; i++) {
        datum.keys[i].uuid = ports[i]->header_.uuid;
    }
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_switch_col_ports, &datum);
}

/* Sets the "qos_rules" column from the "Logical_Switch" table in 'row' to
 * the 'qos_rules' set with 'n_qos_rules' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_set_qos_rules(const struct nbrec_logical_switch *row, struct nbrec_qos **qos_rules, size_t n_qos_rules)
{
    struct ovsdb_datum datum;

    datum.n = n_qos_rules;
    datum.keys = n_qos_rules ? xmalloc(n_qos_rules * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_qos_rules; i++) {
        datum.keys[i].uuid = qos_rules[i]->header_.uuid;
    }
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_switch_col_qos_rules, &datum);
}

/* Adds the value 'new_value' to the "acls" set column from the "Logical_Switch" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_update_acls_addvalue(const struct nbrec_logical_switch *row, const struct nbrec_acl *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_col_acls,
                                    datum);
}

/* Deletes the value 'delete_value' from the "acls" set column from the
 * "Logical_Switch" table in 'row'.
 *
 */
void
nbrec_logical_switch_update_acls_delvalue(const struct nbrec_logical_switch *row, const struct nbrec_acl *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_col_acls,
                                    datum);
}

/* Adds the value 'new_value' to the "dns_records" set column from the "Logical_Switch" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_update_dns_records_addvalue(const struct nbrec_logical_switch *row, const struct nbrec_dns *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_col_dns_records,
                                    datum);
}

/* Deletes the value 'delete_value' from the "dns_records" set column from the
 * "Logical_Switch" table in 'row'.
 *
 */
void
nbrec_logical_switch_update_dns_records_delvalue(const struct nbrec_logical_switch *row, const struct nbrec_dns *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_col_dns_records,
                                    datum);
}

/* Sets an element of the "external_ids" map column from the "Logical_Switch" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_logical_switch_update_external_ids_setkey(const struct nbrec_logical_switch *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_logical_switch_col_external_ids,
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "Logical_Switch" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_logical_switch_update_external_ids_delkey(const struct nbrec_logical_switch *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_logical_switch_col_external_ids,
                                    datum);
}

/* Adds the value 'new_value' to the "load_balancer" set column from the "Logical_Switch" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_update_load_balancer_addvalue(const struct nbrec_logical_switch *row, const struct nbrec_load_balancer *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_col_load_balancer,
                                    datum);
}

/* Deletes the value 'delete_value' from the "load_balancer" set column from the
 * "Logical_Switch" table in 'row'.
 *
 */
void
nbrec_logical_switch_update_load_balancer_delvalue(const struct nbrec_logical_switch *row, const struct nbrec_load_balancer *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_col_load_balancer,
                                    datum);
}

/* Sets an element of the "other_config" map column from the "Logical_Switch" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_logical_switch_update_other_config_setkey(const struct nbrec_logical_switch *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_logical_switch_col_other_config,
                                    datum);
}

/* Deletes an element of the "other_config" map column from the "Logical_Switch" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_logical_switch_update_other_config_delkey(const struct nbrec_logical_switch *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_logical_switch_col_other_config,
                                    datum);
}

/* Adds the value 'new_value' to the "ports" set column from the "Logical_Switch" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_update_ports_addvalue(const struct nbrec_logical_switch *row, const struct nbrec_logical_switch_port *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_col_ports,
                                    datum);
}

/* Deletes the value 'delete_value' from the "ports" set column from the
 * "Logical_Switch" table in 'row'.
 *
 */
void
nbrec_logical_switch_update_ports_delvalue(const struct nbrec_logical_switch *row, const struct nbrec_logical_switch_port *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_col_ports,
                                    datum);
}

/* Adds the value 'new_value' to the "qos_rules" set column from the "Logical_Switch" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_update_qos_rules_addvalue(const struct nbrec_logical_switch *row, const struct nbrec_qos *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_col_qos_rules,
                                    datum);
}

/* Deletes the value 'delete_value' from the "qos_rules" set column from the
 * "Logical_Switch" table in 'row'.
 *
 */
void
nbrec_logical_switch_update_qos_rules_delvalue(const struct nbrec_logical_switch *row, const struct nbrec_qos *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_col_qos_rules,
                                    datum);
}

/* Sets the "acls" column from the "Logical_Switch" table in 'row' to
 * the 'acls' set with 'n_acls' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_add_clause_acls(struct ovsdb_idl_condition *cond, enum ovsdb_function function, struct uuid **acls, size_t n_acls)
{
    struct ovsdb_datum datum;
    datum.n = n_acls;
    datum.keys = n_acls ? xmalloc(n_acls * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_acls; i++) {
        datum.keys[i].uuid = *acls[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_switch_col_acls,
                          &datum);
    free(datum.keys);
}

/* Sets the "dns_records" column from the "Logical_Switch" table in 'row' to
 * the 'dns_records' set with 'n_dns_records' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_add_clause_dns_records(struct ovsdb_idl_condition *cond, enum ovsdb_function function, struct uuid **dns_records, size_t n_dns_records)
{
    struct ovsdb_datum datum;
    datum.n = n_dns_records;
    datum.keys = n_dns_records ? xmalloc(n_dns_records * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_dns_records; i++) {
        datum.keys[i].uuid = *dns_records[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_switch_col_dns_records,
                          &datum);
    free(datum.keys);
}

/* Sets the "external_ids" column's value from the "Logical_Switch" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_switch_add_clause_external_ids(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_logical_switch_col_external_ids,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_logical_switch_col_external_ids.type);
}


/* Sets the "load_balancer" column from the "Logical_Switch" table in 'row' to
 * the 'load_balancer' set with 'n_load_balancer' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_add_clause_load_balancer(struct ovsdb_idl_condition *cond, enum ovsdb_function function, struct uuid **load_balancer, size_t n_load_balancer)
{
    struct ovsdb_datum datum;
    datum.n = n_load_balancer;
    datum.keys = n_load_balancer ? xmalloc(n_load_balancer * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_load_balancer; i++) {
        datum.keys[i].uuid = *load_balancer[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_switch_col_load_balancer,
                          &datum);
    free(datum.keys);
}

/* Sets the "name" column from the "Logical_Switch" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_add_clause_name(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_switch_col_name,
                          &datum);
}

/* Sets the "other_config" column's value from the "Logical_Switch" table in 'row'
 * to 'other_config'.
 *
 * The caller retains ownership of 'other_config' and everything in it. */
void
nbrec_logical_switch_add_clause_other_config(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *other_config)
{
    struct ovsdb_datum datum;

    if (other_config) {
        ovsdb_datum_from_smap(&datum, other_config);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_logical_switch_col_other_config,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_logical_switch_col_other_config.type);
}


/* Sets the "ports" column from the "Logical_Switch" table in 'row' to
 * the 'ports' set with 'n_ports' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_add_clause_ports(struct ovsdb_idl_condition *cond, enum ovsdb_function function, struct uuid **ports, size_t n_ports)
{
    struct ovsdb_datum datum;
    datum.n = n_ports;
    datum.keys = n_ports ? xmalloc(n_ports * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_ports; i++) {
        datum.keys[i].uuid = *ports[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_switch_col_ports,
                          &datum);
    free(datum.keys);
}

/* Sets the "qos_rules" column from the "Logical_Switch" table in 'row' to
 * the 'qos_rules' set with 'n_qos_rules' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_add_clause_qos_rules(struct ovsdb_idl_condition *cond, enum ovsdb_function function, struct uuid **qos_rules, size_t n_qos_rules)
{
    struct ovsdb_datum datum;
    datum.n = n_qos_rules;
    datum.keys = n_qos_rules ? xmalloc(n_qos_rules * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_qos_rules; i++) {
        datum.keys[i].uuid = *qos_rules[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_switch_col_qos_rules,
                          &datum);
    free(datum.keys);
}

/* Destroy 'row' of kind "Logical_Switch". The row must have been
 * created with ovsdb_idl_index_init_row.
 */
void
nbrec_logical_switch_index_destroy_row(const struct nbrec_logical_switch *row)
{
    ovsdb_idl_index_destroy_row__(&row->header_);
}
        

/* Creates a new row of kind "Logical_Switch". */
struct nbrec_logical_switch *
nbrec_logical_switch_index_init_row(struct ovsdb_idl *idl, const struct ovsdb_idl_table_class *class)
{
    return (struct nbrec_logical_switch *) ovsdb_idl_index_init_row(idl, class);
}

/*  This function is used to compare "nbrec_logical_switch" records on table in iteration loops for compound-index operations.
    After been called, cursor point to current position in the index
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct "nbrec_logical_switch" *const_data1,  const struct "nbrec_logical_switch" *const_data2. Data to be compared.
    Return value: 0 if both data values are equal, -1 if first parameter is less than second and 1 otherwise. */
int
nbrec_logical_switch_index_compare(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_logical_switch *const_data1,  const struct nbrec_logical_switch *const_data2)
{
    struct nbrec_logical_switch *data1 = CONST_CAST(struct nbrec_logical_switch *, const_data1);
    struct nbrec_logical_switch *data2 = CONST_CAST(struct nbrec_logical_switch *, const_data2);
    return ovsdb_idl_index_compare(cursor, &data1->header_, &data2->header_);
}

/*  This function is called to position the cursor at the first row in "nbrec_logical_switch" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The first row in the corresponding index. */
const struct nbrec_logical_switch *
nbrec_logical_switch_index_first(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_logical_switch_cast(ovsdb_idl_index_first(cursor));
}

/*  This function is called to position the cursor at the next row in "nbrec_logical_switch" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The next row in the corresponding index. */
const struct nbrec_logical_switch *
nbrec_logical_switch_index_next(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_logical_switch_cast(ovsdb_idl_index_next(cursor));
}

/*  This function is used to find the data of the row in "nbrec_logical_switch" table that meet criteria with the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_logical_switch *const_data. Data to be searched.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_logical_switch *
nbrec_logical_switch_index_find(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_logical_switch *const_data)
{
    struct nbrec_logical_switch *data = CONST_CAST(struct nbrec_logical_switch *, const_data);
    return nbrec_logical_switch_cast(ovsdb_idl_index_find(cursor, &data->header_));
}

/*  This function is used to set the cursor pointing to the row in "nbrec_logical_switch" table that meet criteria of the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_logical_switch *const_data. Data to be searched.
    Return value: The row in the corresponding index closest to the criteria. */
const struct nbrec_logical_switch *
nbrec_logical_switch_index_forward_to(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_logical_switch *const_data)
{
    struct nbrec_logical_switch *data = CONST_CAST(struct nbrec_logical_switch *, const_data);
    return nbrec_logical_switch_cast(ovsdb_idl_index_forward_to(cursor, &data->header_));
}

/*  This function is used to get the data of the row in the current position pointed by the cursor in
    "nbrec_logical_switch" table.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_logical_switch *
nbrec_logical_switch_index_get_data(const struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_logical_switch_cast(ovsdb_idl_index_data(CONST_CAST(struct ovsdb_idl_index_cursor *, cursor)));
}

/* Sets the "acls" column from the "Logical_Switch" table in 'row' to
 * the 'acls' set with 'n_acls' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_index_set_acls(const struct nbrec_logical_switch *row, struct nbrec_acl **acls, size_t n_acls)
{
    struct ovsdb_datum datum;
    size_t i;

    datum.n = n_acls;
    datum.keys = n_acls ? xmalloc(n_acls * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_acls; i++) {
        datum.keys[i].uuid = acls[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_switch_columns[ NBREC_LOGICAL_SWITCH_COL_ACLS ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH]);
}

/* Sets the "dns_records" column from the "Logical_Switch" table in 'row' to
 * the 'dns_records' set with 'n_dns_records' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_index_set_dns_records(const struct nbrec_logical_switch *row, struct nbrec_dns **dns_records, size_t n_dns_records)
{
    struct ovsdb_datum datum;
    size_t i;

    datum.n = n_dns_records;
    datum.keys = n_dns_records ? xmalloc(n_dns_records * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_dns_records; i++) {
        datum.keys[i].uuid = dns_records[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_switch_columns[ NBREC_LOGICAL_SWITCH_COL_DNS_RECORDS ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH]);
}

/* Sets the "external_ids" column's value from the "Logical_Switch" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_switch_index_set_external_ids(const struct nbrec_logical_switch *row, const struct smap *external_ids)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(external_ids);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_EXTERNAL_IDS],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH]);
}


/* Sets the "load_balancer" column from the "Logical_Switch" table in 'row' to
 * the 'load_balancer' set with 'n_load_balancer' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_index_set_load_balancer(const struct nbrec_logical_switch *row, struct nbrec_load_balancer **load_balancer, size_t n_load_balancer)
{
    struct ovsdb_datum datum;
    size_t i;

    datum.n = n_load_balancer;
    datum.keys = n_load_balancer ? xmalloc(n_load_balancer * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_load_balancer; i++) {
        datum.keys[i].uuid = load_balancer[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_switch_columns[ NBREC_LOGICAL_SWITCH_COL_LOAD_BALANCER ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH]);
}

/* Sets the "name" column from the "Logical_Switch" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_index_set_name(const struct nbrec_logical_switch *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_switch_columns[ NBREC_LOGICAL_SWITCH_COL_NAME ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH]);
}

/* Sets the "other_config" column's value from the "Logical_Switch" table in 'row'
 * to 'other_config'.
 *
 * The caller retains ownership of 'other_config' and everything in it. */
void
nbrec_logical_switch_index_set_other_config(const struct nbrec_logical_switch *row, const struct smap *other_config)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (other_config) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(other_config);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, other_config) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_OTHER_CONFIG],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH]);
}


/* Sets the "ports" column from the "Logical_Switch" table in 'row' to
 * the 'ports' set with 'n_ports' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_index_set_ports(const struct nbrec_logical_switch *row, struct nbrec_logical_switch_port **ports, size_t n_ports)
{
    struct ovsdb_datum datum;
    size_t i;

    datum.n = n_ports;
    datum.keys = n_ports ? xmalloc(n_ports * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_ports; i++) {
        datum.keys[i].uuid = ports[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_switch_columns[ NBREC_LOGICAL_SWITCH_COL_PORTS ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH]);
}

/* Sets the "qos_rules" column from the "Logical_Switch" table in 'row' to
 * the 'qos_rules' set with 'n_qos_rules' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_index_set_qos_rules(const struct nbrec_logical_switch *row, struct nbrec_qos **qos_rules, size_t n_qos_rules)
{
    struct ovsdb_datum datum;
    size_t i;

    datum.n = n_qos_rules;
    datum.keys = n_qos_rules ? xmalloc(n_qos_rules * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_qos_rules; i++) {
        datum.keys[i].uuid = qos_rules[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_switch_columns[ NBREC_LOGICAL_SWITCH_COL_QOS_RULES ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH]);
}

struct ovsdb_idl_column nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_N_COLUMNS];

void
nbrec_logical_switch_set_condition(struct ovsdb_idl *idl, struct ovsdb_idl_condition *condition)
{
    ovsdb_idl_set_condition(idl, &nbrec_table_logical_switch, condition);
}

struct ovsdb_idl_column nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_N_COLUMNS] = {
    [NBREC_LOGICAL_SWITCH_COL_ACLS] = {
         .name = "acls",
         .type = {
            .key = {
               .type = OVSDB_TYPE_UUID,
               .u.uuid = { .refTableName = "ACL", .refType = OVSDB_REF_STRONG },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = UINT_MAX,
         },
         .mutable = true,
         .parse = nbrec_logical_switch_parse_acls,
         .unparse = nbrec_logical_switch_unparse_acls,
    },

    [NBREC_LOGICAL_SWITCH_COL_DNS_RECORDS] = {
         .name = "dns_records",
         .type = {
            .key = {
               .type = OVSDB_TYPE_UUID,
               .u.uuid = { .refTableName = "DNS", .refType = OVSDB_REF_WEAK },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = UINT_MAX,
         },
         .mutable = true,
         .parse = nbrec_logical_switch_parse_dns_records,
         .unparse = nbrec_logical_switch_unparse_dns_records,
    },

    [NBREC_LOGICAL_SWITCH_COL_EXTERNAL_IDS] = {
         .name = "external_ids",
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
         .parse = nbrec_logical_switch_parse_external_ids,
         .unparse = nbrec_logical_switch_unparse_external_ids,
    },

    [NBREC_LOGICAL_SWITCH_COL_LOAD_BALANCER] = {
         .name = "load_balancer",
         .type = {
            .key = {
               .type = OVSDB_TYPE_UUID,
               .u.uuid = { .refTableName = "Load_Balancer", .refType = OVSDB_REF_STRONG },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = UINT_MAX,
         },
         .mutable = true,
         .parse = nbrec_logical_switch_parse_load_balancer,
         .unparse = nbrec_logical_switch_unparse_load_balancer,
    },

    [NBREC_LOGICAL_SWITCH_COL_NAME] = {
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
         .parse = nbrec_logical_switch_parse_name,
         .unparse = nbrec_logical_switch_unparse_name,
    },

    [NBREC_LOGICAL_SWITCH_COL_OTHER_CONFIG] = {
         .name = "other_config",
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
         .parse = nbrec_logical_switch_parse_other_config,
         .unparse = nbrec_logical_switch_unparse_other_config,
    },

    [NBREC_LOGICAL_SWITCH_COL_PORTS] = {
         .name = "ports",
         .type = {
            .key = {
               .type = OVSDB_TYPE_UUID,
               .u.uuid = { .refTableName = "Logical_Switch_Port", .refType = OVSDB_REF_STRONG },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = UINT_MAX,
         },
         .mutable = true,
         .parse = nbrec_logical_switch_parse_ports,
         .unparse = nbrec_logical_switch_unparse_ports,
    },

    [NBREC_LOGICAL_SWITCH_COL_QOS_RULES] = {
         .name = "qos_rules",
         .type = {
            .key = {
               .type = OVSDB_TYPE_UUID,
               .u.uuid = { .refTableName = "QoS", .refType = OVSDB_REF_STRONG },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = UINT_MAX,
         },
         .mutable = true,
         .parse = nbrec_logical_switch_parse_qos_rules,
         .unparse = nbrec_logical_switch_unparse_qos_rules,
    },

};

/* Logical_Switch_Port table. */

static void
nbrec_logical_switch_port_parse_addresses(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    row->addresses = NULL;
    row->n_addresses = 0;
    for (size_t i = 0; i < datum->n; i++) {
        if (!row->n_addresses) {
            row->addresses = xmalloc(datum->n * sizeof *row->addresses);
        }
        row->addresses[row->n_addresses] = datum->keys[i].string;
        row->n_addresses++;
    }
}

static void
nbrec_logical_switch_port_parse_dhcpv4_options(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);

    if (datum->n >= 1) {
        row->dhcpv4_options = nbrec_dhcp_options_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_dhcp_options, &datum->keys[0].uuid));
    } else {
        row->dhcpv4_options = NULL;
    }
}

static void
nbrec_logical_switch_port_parse_dhcpv6_options(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);

    if (datum->n >= 1) {
        row->dhcpv6_options = nbrec_dhcp_options_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_dhcp_options, &datum->keys[0].uuid));
    } else {
        row->dhcpv6_options = NULL;
    }
}

static void
nbrec_logical_switch_port_parse_dynamic_addresses(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);

    if (datum->n >= 1) {
        row->dynamic_addresses = datum->keys[0].string;
    } else {
        row->dynamic_addresses = NULL;
    }
}

static void
nbrec_logical_switch_port_parse_enabled(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    size_t n = MIN(1, datum->n);
    row->enabled = NULL;
    row->n_enabled = 0;
    for (size_t i = 0; i < n; i++) {
        if (!row->n_enabled) {
            row->enabled = xmalloc(n * sizeof *row->enabled);
        }
        row->enabled[row->n_enabled] = datum->keys[i].boolean;
        row->n_enabled++;
    }
}

static void
nbrec_logical_switch_port_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    smap_init(&row->external_ids);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_logical_switch_port_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);

    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
nbrec_logical_switch_port_parse_options(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    smap_init(&row->options);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->options,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_logical_switch_port_parse_parent_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);

    if (datum->n >= 1) {
        row->parent_name = datum->keys[0].string;
    } else {
        row->parent_name = NULL;
    }
}

static void
nbrec_logical_switch_port_parse_port_security(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    row->port_security = NULL;
    row->n_port_security = 0;
    for (size_t i = 0; i < datum->n; i++) {
        if (!row->n_port_security) {
            row->port_security = xmalloc(datum->n * sizeof *row->port_security);
        }
        row->port_security[row->n_port_security] = datum->keys[i].string;
        row->n_port_security++;
    }
}

static void
nbrec_logical_switch_port_parse_tag(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    size_t n = MIN(1, datum->n);
    row->tag = NULL;
    row->n_tag = 0;
    for (size_t i = 0; i < n; i++) {
        if (!row->n_tag) {
            row->tag = xmalloc(n * sizeof *row->tag);
        }
        row->tag[row->n_tag] = datum->keys[i].integer;
        row->n_tag++;
    }
}

static void
nbrec_logical_switch_port_parse_tag_request(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    size_t n = MIN(1, datum->n);
    row->tag_request = NULL;
    row->n_tag_request = 0;
    for (size_t i = 0; i < n; i++) {
        if (!row->n_tag_request) {
            row->tag_request = xmalloc(n * sizeof *row->tag_request);
        }
        row->tag_request[row->n_tag_request] = datum->keys[i].integer;
        row->n_tag_request++;
    }
}

static void
nbrec_logical_switch_port_parse_type(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);

    if (datum->n >= 1) {
        row->type = datum->keys[0].string;
    } else {
        row->type = "";
    }
}

static void
nbrec_logical_switch_port_parse_up(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    size_t n = MIN(1, datum->n);
    row->up = NULL;
    row->n_up = 0;
    for (size_t i = 0; i < n; i++) {
        if (!row->n_up) {
            row->up = xmalloc(n * sizeof *row->up);
        }
        row->up[row->n_up] = datum->keys[i].boolean;
        row->n_up++;
    }
}

static void
nbrec_logical_switch_port_unparse_addresses(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    free(row->addresses);
}

static void
nbrec_logical_switch_port_unparse_dhcpv4_options(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_switch_port_unparse_dhcpv6_options(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_switch_port_unparse_dynamic_addresses(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_switch_port_unparse_enabled(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    free(row->enabled);
}

static void
nbrec_logical_switch_port_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    smap_destroy(&row->external_ids);
}

static void
nbrec_logical_switch_port_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_switch_port_unparse_options(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    smap_destroy(&row->options);
}

static void
nbrec_logical_switch_port_unparse_parent_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_switch_port_unparse_port_security(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    free(row->port_security);
}

static void
nbrec_logical_switch_port_unparse_tag(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    free(row->tag);
}

static void
nbrec_logical_switch_port_unparse_tag_request(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    free(row->tag_request);
}

static void
nbrec_logical_switch_port_unparse_type(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_switch_port_unparse_up(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    free(row->up);
}

static void
nbrec_logical_switch_port_init__(struct ovsdb_idl_row *row)
{
    nbrec_logical_switch_port_init(nbrec_logical_switch_port_cast(row));
}

/* Clears the contents of 'row' in table "Logical_Switch_Port". */
void
nbrec_logical_switch_port_init(struct nbrec_logical_switch_port *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
    row->name = "";
    smap_init(&row->options);
    row->type = "";
}

/* Searches table "Logical_Switch_Port" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_logical_switch_port *
nbrec_logical_switch_port_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_logical_switch_port_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_logical_switch_port, uuid));
}

/* Returns a row in table "Logical_Switch_Port" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_logical_switch_port *
nbrec_logical_switch_port_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_switch_port_cast(ovsdb_idl_first_row(idl, &nbrec_table_logical_switch_port));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_logical_switch_port *
nbrec_logical_switch_port_next(const struct nbrec_logical_switch_port *row)
{
    return nbrec_logical_switch_port_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_logical_switch_port_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_logical_switch_port);
}

unsigned int nbrec_logical_switch_port_row_get_seqno(const struct nbrec_logical_switch_port *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_logical_switch_port *
nbrec_logical_switch_port_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_switch_port_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_logical_switch_port));
}

const struct nbrec_logical_switch_port
*nbrec_logical_switch_port_track_get_next(const struct nbrec_logical_switch_port *row)
{
    return nbrec_logical_switch_port_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Logical_Switch_Port".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_delete(const struct nbrec_logical_switch_port *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Logical_Switch_Port" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_logical_switch_port *
nbrec_logical_switch_port_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_logical_switch_port_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_logical_switch_port, NULL));
}

bool
nbrec_logical_switch_port_is_updated(const struct nbrec_logical_switch_port *row, enum nbrec_logical_switch_port_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_logical_switch_port_columns[column]);
}

/* Causes the original contents of column "addresses" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "addresses" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "addresses" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "addresses" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "addresses" has already been modified (with
 *     nbrec_logical_switch_port_set_addresses()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_addresses() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_addresses(const struct nbrec_logical_switch_port *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_col_addresses);
}

/* Causes the original contents of column "dhcpv4_options" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "dhcpv4_options" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "dhcpv4_options" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "dhcpv4_options" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "dhcpv4_options" has already been modified (with
 *     nbrec_logical_switch_port_set_dhcpv4_options()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_dhcpv4_options() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_dhcpv4_options(const struct nbrec_logical_switch_port *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_col_dhcpv4_options);
}

/* Causes the original contents of column "dhcpv6_options" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "dhcpv6_options" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "dhcpv6_options" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "dhcpv6_options" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "dhcpv6_options" has already been modified (with
 *     nbrec_logical_switch_port_set_dhcpv6_options()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_dhcpv6_options() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_dhcpv6_options(const struct nbrec_logical_switch_port *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_col_dhcpv6_options);
}

/* Causes the original contents of column "dynamic_addresses" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "dynamic_addresses" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "dynamic_addresses" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "dynamic_addresses" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "dynamic_addresses" has already been modified (with
 *     nbrec_logical_switch_port_set_dynamic_addresses()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_dynamic_addresses() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_dynamic_addresses(const struct nbrec_logical_switch_port *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_col_dynamic_addresses);
}

/* Causes the original contents of column "enabled" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "enabled" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "enabled" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "enabled" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "enabled" has already been modified (with
 *     nbrec_logical_switch_port_set_enabled()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_enabled() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_enabled(const struct nbrec_logical_switch_port *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_col_enabled);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_logical_switch_port_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_external_ids(const struct nbrec_logical_switch_port *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_col_external_ids);
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
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "name" has already been modified (with
 *     nbrec_logical_switch_port_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_name(const struct nbrec_logical_switch_port *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_col_name);
}

/* Causes the original contents of column "options" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "options" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "options" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "options" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "options" has already been modified (with
 *     nbrec_logical_switch_port_set_options()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_options() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_options(const struct nbrec_logical_switch_port *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_col_options);
}

/* Causes the original contents of column "parent_name" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "parent_name" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "parent_name" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "parent_name" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "parent_name" has already been modified (with
 *     nbrec_logical_switch_port_set_parent_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_parent_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_parent_name(const struct nbrec_logical_switch_port *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_col_parent_name);
}

/* Causes the original contents of column "port_security" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "port_security" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "port_security" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "port_security" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "port_security" has already been modified (with
 *     nbrec_logical_switch_port_set_port_security()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_port_security() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_port_security(const struct nbrec_logical_switch_port *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_col_port_security);
}

/* Causes the original contents of column "tag" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "tag" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "tag" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "tag" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "tag" has already been modified (with
 *     nbrec_logical_switch_port_set_tag()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_tag() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_tag(const struct nbrec_logical_switch_port *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_col_tag);
}

/* Causes the original contents of column "tag_request" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "tag_request" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "tag_request" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "tag_request" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "tag_request" has already been modified (with
 *     nbrec_logical_switch_port_set_tag_request()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_tag_request() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_tag_request(const struct nbrec_logical_switch_port *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_col_tag_request);
}

/* Causes the original contents of column "type" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "type" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "type" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "type" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "type" has already been modified (with
 *     nbrec_logical_switch_port_set_type()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_type() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_type(const struct nbrec_logical_switch_port *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_col_type);
}

/* Causes the original contents of column "up" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "up" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "up" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "up" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "up" has already been modified (with
 *     nbrec_logical_switch_port_set_up()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_up() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_up(const struct nbrec_logical_switch_port *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_col_up);
}

/* Returns the "addresses" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes addresses's
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
 * directly through the "addresses" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_addresses(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_addresses);
}

/* Returns the "dhcpv4_options" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes dhcpv4_options's
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
 * directly through the "dhcpv4_options" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_dhcpv4_options(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_dhcpv4_options);
}

/* Returns the "dhcpv6_options" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes dhcpv6_options's
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
 * directly through the "dhcpv6_options" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_dhcpv6_options(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_dhcpv6_options);
}

/* Returns the "dynamic_addresses" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes dynamic_addresses's
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
 * directly through the "dynamic_addresses" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_dynamic_addresses(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_dynamic_addresses);
}

/* Returns the "enabled" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes enabled's
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
 * directly through the "enabled" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_enabled(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_enabled);
}

/* Returns the "external_ids" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
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
 * directly through the "external_ids" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_external_ids(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_external_ids);
}

/* Returns the "name" column's value from the "Logical_Switch_Port" table in 'row'
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
 * directly through the "name" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_name(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_name);
}

/* Returns the "options" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes options's
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
 * directly through the "options" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_options(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_options);
}

/* Returns the "parent_name" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes parent_name's
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
 * directly through the "parent_name" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_parent_name(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_parent_name);
}

/* Returns the "port_security" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes port_security's
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
 * directly through the "port_security" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_port_security(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_port_security);
}

/* Returns the "tag" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes tag's
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
 * directly through the "tag" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_tag(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_tag);
}

/* Returns the "tag_request" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes tag_request's
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
 * directly through the "tag_request" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_tag_request(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_tag_request);
}

/* Returns the "type" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes type's
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
 * directly through the "type" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_type(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_type);
}

/* Returns the "up" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes up's
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
 * directly through the "up" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_up(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_up);
}

/* Sets the "addresses" column from the "Logical_Switch_Port" table in 'row' to
 * the 'addresses' set with 'n_addresses' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_addresses(const struct nbrec_logical_switch_port *row, const char **addresses, size_t n_addresses)
{
    struct ovsdb_datum datum;

    datum.n = n_addresses;
    datum.keys = n_addresses ? xmalloc(n_addresses * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_addresses; i++) {
        datum.keys[i].string = xstrdup(addresses[i]);
    }
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_switch_port_col_addresses, &datum);
}

/* Sets the "dhcpv4_options" column from the "Logical_Switch_Port" table in 'row' to
 * the 'dhcpv4_options' set.
 *
 * If "dhcpv4_options" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_dhcpv4_options(const struct nbrec_logical_switch_port *row, const struct nbrec_dhcp_options *dhcpv4_options)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (dhcpv4_options) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = dhcpv4_options->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_switch_port_col_dhcpv4_options, &datum);
}

/* Sets the "dhcpv6_options" column from the "Logical_Switch_Port" table in 'row' to
 * the 'dhcpv6_options' set.
 *
 * If "dhcpv6_options" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_dhcpv6_options(const struct nbrec_logical_switch_port *row, const struct nbrec_dhcp_options *dhcpv6_options)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (dhcpv6_options) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = dhcpv6_options->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_switch_port_col_dhcpv6_options, &datum);
}

/* Sets the "dynamic_addresses" column from the "Logical_Switch_Port" table in 'row' to
 * the 'dynamic_addresses' set.
 *
 * If "dynamic_addresses" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_dynamic_addresses(const struct nbrec_logical_switch_port *row, const char *dynamic_addresses)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (dynamic_addresses) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, dynamic_addresses);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_switch_port_col_dynamic_addresses, &datum);
}

/* Sets the "enabled" column from the "Logical_Switch_Port" table in 'row' to
 * the 'enabled' set with 'n_enabled' entries.
 *
 * 'n_enabled' may be 0 or 1; if it is 0, then 'enabled'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_enabled(const struct nbrec_logical_switch_port *row, const bool *enabled, size_t n_enabled)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (n_enabled) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *enabled;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_switch_port_col_enabled, &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Switch_Port" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_switch_port_set_external_ids(const struct nbrec_logical_switch_port *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_logical_switch_port_col_external_ids,
                        &datum);
}


/* Sets the "name" column from the "Logical_Switch_Port" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_name(const struct nbrec_logical_switch_port *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_switch_port_col_name, &datum);
}

/* Sets the "options" column's value from the "Logical_Switch_Port" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_logical_switch_port_set_options(const struct nbrec_logical_switch_port *row, const struct smap *options)
{
    struct ovsdb_datum datum;

    if (options) {
        ovsdb_datum_from_smap(&datum, options);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_logical_switch_port_col_options,
                        &datum);
}


/* Sets the "parent_name" column from the "Logical_Switch_Port" table in 'row' to
 * the 'parent_name' set.
 *
 * If "parent_name" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_parent_name(const struct nbrec_logical_switch_port *row, const char *parent_name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (parent_name) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, parent_name);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_switch_port_col_parent_name, &datum);
}

/* Sets the "port_security" column from the "Logical_Switch_Port" table in 'row' to
 * the 'port_security' set with 'n_port_security' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_port_security(const struct nbrec_logical_switch_port *row, const char **port_security, size_t n_port_security)
{
    struct ovsdb_datum datum;

    datum.n = n_port_security;
    datum.keys = n_port_security ? xmalloc(n_port_security * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_port_security; i++) {
        datum.keys[i].string = xstrdup(port_security[i]);
    }
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_switch_port_col_port_security, &datum);
}

/* Sets the "tag" column from the "Logical_Switch_Port" table in 'row' to
 * the 'tag' set with 'n_tag' entries.
 *
 * 'n_tag' may be 0 or 1; if it is 0, then 'tag'
 * may be NULL.
 *
 * Argument constraints: in range 1 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_tag(const struct nbrec_logical_switch_port *row, const int64_t *tag, size_t n_tag)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (n_tag) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *tag;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_switch_port_col_tag, &datum);
}

/* Sets the "tag_request" column from the "Logical_Switch_Port" table in 'row' to
 * the 'tag_request' set with 'n_tag_request' entries.
 *
 * 'n_tag_request' may be 0 or 1; if it is 0, then 'tag_request'
 * may be NULL.
 *
 * Argument constraints: in range 0 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_tag_request(const struct nbrec_logical_switch_port *row, const int64_t *tag_request, size_t n_tag_request)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (n_tag_request) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *tag_request;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_switch_port_col_tag_request, &datum);
}

/* Sets the "type" column from the "Logical_Switch_Port" table in 'row' to
 * 'type'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_type(const struct nbrec_logical_switch_port *row, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_switch_port_col_type, &datum);
}

/* Sets the "up" column from the "Logical_Switch_Port" table in 'row' to
 * the 'up' set with 'n_up' entries.
 *
 * 'n_up' may be 0 or 1; if it is 0, then 'up'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_up(const struct nbrec_logical_switch_port *row, const bool *up, size_t n_up)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (n_up) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *up;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_switch_port_col_up, &datum);
}

/* Adds the value 'new_value' to the "addresses" set column from the "Logical_Switch_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_addresses_addvalue(const struct nbrec_logical_switch_port *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_col_addresses,
                                    datum);
}

/* Deletes the value 'delete_value' from the "addresses" set column from the
 * "Logical_Switch_Port" table in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_addresses_delvalue(const struct nbrec_logical_switch_port *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_col_addresses,
                                    datum);
}

/* Adds the value 'new_value' to the "dhcpv4_options" set column from the "Logical_Switch_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_dhcpv4_options_addvalue(const struct nbrec_logical_switch_port *row, const struct nbrec_dhcp_options *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_col_dhcpv4_options,
                                    datum);
}

/* Deletes the value 'delete_value' from the "dhcpv4_options" set column from the
 * "Logical_Switch_Port" table in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_dhcpv4_options_delvalue(const struct nbrec_logical_switch_port *row, const struct nbrec_dhcp_options *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_col_dhcpv4_options,
                                    datum);
}

/* Adds the value 'new_value' to the "dhcpv6_options" set column from the "Logical_Switch_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_dhcpv6_options_addvalue(const struct nbrec_logical_switch_port *row, const struct nbrec_dhcp_options *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_col_dhcpv6_options,
                                    datum);
}

/* Deletes the value 'delete_value' from the "dhcpv6_options" set column from the
 * "Logical_Switch_Port" table in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_dhcpv6_options_delvalue(const struct nbrec_logical_switch_port *row, const struct nbrec_dhcp_options *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_col_dhcpv6_options,
                                    datum);
}

/* Adds the value 'new_value' to the "dynamic_addresses" set column from the "Logical_Switch_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_dynamic_addresses_addvalue(const struct nbrec_logical_switch_port *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_col_dynamic_addresses,
                                    datum);
}

/* Deletes the value 'delete_value' from the "dynamic_addresses" set column from the
 * "Logical_Switch_Port" table in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_dynamic_addresses_delvalue(const struct nbrec_logical_switch_port *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_col_dynamic_addresses,
                                    datum);
}

/* Adds the value 'new_value' to the "enabled" set column from the "Logical_Switch_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_enabled_addvalue(const struct nbrec_logical_switch_port *row, bool new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].boolean = new_value;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_col_enabled,
                                    datum);
}

/* Deletes the value 'delete_value' from the "enabled" set column from the
 * "Logical_Switch_Port" table in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_enabled_delvalue(const struct nbrec_logical_switch_port *row, bool delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].boolean = delete_value;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_col_enabled,
                                    datum);
}

/* Sets an element of the "external_ids" map column from the "Logical_Switch_Port" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_logical_switch_port_update_external_ids_setkey(const struct nbrec_logical_switch_port *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_logical_switch_port_col_external_ids,
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "Logical_Switch_Port" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_logical_switch_port_update_external_ids_delkey(const struct nbrec_logical_switch_port *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_logical_switch_port_col_external_ids,
                                    datum);
}

/* Sets an element of the "options" map column from the "Logical_Switch_Port" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_logical_switch_port_update_options_setkey(const struct nbrec_logical_switch_port *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_logical_switch_port_col_options,
                                    datum);
}

/* Deletes an element of the "options" map column from the "Logical_Switch_Port" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_logical_switch_port_update_options_delkey(const struct nbrec_logical_switch_port *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_logical_switch_port_col_options,
                                    datum);
}

/* Adds the value 'new_value' to the "parent_name" set column from the "Logical_Switch_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_parent_name_addvalue(const struct nbrec_logical_switch_port *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_col_parent_name,
                                    datum);
}

/* Deletes the value 'delete_value' from the "parent_name" set column from the
 * "Logical_Switch_Port" table in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_parent_name_delvalue(const struct nbrec_logical_switch_port *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_col_parent_name,
                                    datum);
}

/* Adds the value 'new_value' to the "port_security" set column from the "Logical_Switch_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_port_security_addvalue(const struct nbrec_logical_switch_port *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_col_port_security,
                                    datum);
}

/* Deletes the value 'delete_value' from the "port_security" set column from the
 * "Logical_Switch_Port" table in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_port_security_delvalue(const struct nbrec_logical_switch_port *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_col_port_security,
                                    datum);
}

/* Adds the value 'new_value' to the "tag" set column from the "Logical_Switch_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_tag_addvalue(const struct nbrec_logical_switch_port *row, int64_t new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].integer = new_value;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_col_tag,
                                    datum);
}

/* Deletes the value 'delete_value' from the "tag" set column from the
 * "Logical_Switch_Port" table in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_tag_delvalue(const struct nbrec_logical_switch_port *row, int64_t delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].integer = delete_value;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_col_tag,
                                    datum);
}

/* Adds the value 'new_value' to the "tag_request" set column from the "Logical_Switch_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_tag_request_addvalue(const struct nbrec_logical_switch_port *row, int64_t new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].integer = new_value;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_col_tag_request,
                                    datum);
}

/* Deletes the value 'delete_value' from the "tag_request" set column from the
 * "Logical_Switch_Port" table in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_tag_request_delvalue(const struct nbrec_logical_switch_port *row, int64_t delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].integer = delete_value;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_col_tag_request,
                                    datum);
}

/* Adds the value 'new_value' to the "up" set column from the "Logical_Switch_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_up_addvalue(const struct nbrec_logical_switch_port *row, bool new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].boolean = new_value;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_col_up,
                                    datum);
}

/* Deletes the value 'delete_value' from the "up" set column from the
 * "Logical_Switch_Port" table in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_up_delvalue(const struct nbrec_logical_switch_port *row, bool delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].boolean = delete_value;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_col_up,
                                    datum);
}

/* Sets the "addresses" column from the "Logical_Switch_Port" table in 'row' to
 * the 'addresses' set with 'n_addresses' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_addresses(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char **addresses, size_t n_addresses)
{
    struct ovsdb_datum datum;
    datum.n = n_addresses;
    datum.keys = n_addresses ? xmalloc(n_addresses * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_addresses; i++) {
        datum.keys[i].string = CONST_CAST(char *, addresses[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_switch_port_col_addresses,
                          &datum);
    free(datum.keys);
}

/* Sets the "dhcpv4_options" column from the "Logical_Switch_Port" table in 'row' to
 * the 'dhcpv4_options' set.
 *
 * If "dhcpv4_options" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_dhcpv4_options(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct uuid *dhcpv4_options)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (dhcpv4_options) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = *dhcpv4_options;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_switch_port_col_dhcpv4_options,
                          &datum);
}

/* Sets the "dhcpv6_options" column from the "Logical_Switch_Port" table in 'row' to
 * the 'dhcpv6_options' set.
 *
 * If "dhcpv6_options" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_dhcpv6_options(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct uuid *dhcpv6_options)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (dhcpv6_options) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = *dhcpv6_options;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_switch_port_col_dhcpv6_options,
                          &datum);
}

/* Sets the "dynamic_addresses" column from the "Logical_Switch_Port" table in 'row' to
 * the 'dynamic_addresses' set.
 *
 * If "dynamic_addresses" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_dynamic_addresses(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *dynamic_addresses)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (dynamic_addresses) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, dynamic_addresses);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_switch_port_col_dynamic_addresses,
                          &datum);
}

/* Sets the "enabled" column from the "Logical_Switch_Port" table in 'row' to
 * the 'enabled' set with 'n_enabled' entries.
 *
 * 'n_enabled' may be 0 or 1; if it is 0, then 'enabled'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_enabled(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const bool *enabled, size_t n_enabled)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (n_enabled) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *enabled;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_switch_port_col_enabled,
                          &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Switch_Port" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_switch_port_add_clause_external_ids(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_logical_switch_port_col_external_ids,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_logical_switch_port_col_external_ids.type);
}


/* Sets the "name" column from the "Logical_Switch_Port" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_name(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_switch_port_col_name,
                          &datum);
}

/* Sets the "options" column's value from the "Logical_Switch_Port" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_logical_switch_port_add_clause_options(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *options)
{
    struct ovsdb_datum datum;

    if (options) {
        ovsdb_datum_from_smap(&datum, options);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_logical_switch_port_col_options,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_logical_switch_port_col_options.type);
}


/* Sets the "parent_name" column from the "Logical_Switch_Port" table in 'row' to
 * the 'parent_name' set.
 *
 * If "parent_name" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_parent_name(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *parent_name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (parent_name) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, parent_name);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_switch_port_col_parent_name,
                          &datum);
}

/* Sets the "port_security" column from the "Logical_Switch_Port" table in 'row' to
 * the 'port_security' set with 'n_port_security' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_port_security(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char **port_security, size_t n_port_security)
{
    struct ovsdb_datum datum;
    datum.n = n_port_security;
    datum.keys = n_port_security ? xmalloc(n_port_security * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_port_security; i++) {
        datum.keys[i].string = CONST_CAST(char *, port_security[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_switch_port_col_port_security,
                          &datum);
    free(datum.keys);
}

/* Sets the "tag" column from the "Logical_Switch_Port" table in 'row' to
 * the 'tag' set with 'n_tag' entries.
 *
 * 'n_tag' may be 0 or 1; if it is 0, then 'tag'
 * may be NULL.
 *
 * Argument constraints: in range 1 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_tag(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const int64_t *tag, size_t n_tag)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (n_tag) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *tag;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_switch_port_col_tag,
                          &datum);
}

/* Sets the "tag_request" column from the "Logical_Switch_Port" table in 'row' to
 * the 'tag_request' set with 'n_tag_request' entries.
 *
 * 'n_tag_request' may be 0 or 1; if it is 0, then 'tag_request'
 * may be NULL.
 *
 * Argument constraints: in range 0 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_tag_request(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const int64_t *tag_request, size_t n_tag_request)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (n_tag_request) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *tag_request;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_switch_port_col_tag_request,
                          &datum);
}

/* Sets the "type" column from the "Logical_Switch_Port" table in 'row' to
 * 'type'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_type(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_switch_port_col_type,
                          &datum);
}

/* Sets the "up" column from the "Logical_Switch_Port" table in 'row' to
 * the 'up' set with 'n_up' entries.
 *
 * 'n_up' may be 0 or 1; if it is 0, then 'up'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_up(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const bool *up, size_t n_up)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (n_up) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *up;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_logical_switch_port_col_up,
                          &datum);
}

/* Destroy 'row' of kind "Logical_Switch_Port". The row must have been
 * created with ovsdb_idl_index_init_row.
 */
void
nbrec_logical_switch_port_index_destroy_row(const struct nbrec_logical_switch_port *row)
{
    ovsdb_idl_index_destroy_row__(&row->header_);
}
        

/* Creates a new row of kind "Logical_Switch_Port". */
struct nbrec_logical_switch_port *
nbrec_logical_switch_port_index_init_row(struct ovsdb_idl *idl, const struct ovsdb_idl_table_class *class)
{
    return (struct nbrec_logical_switch_port *) ovsdb_idl_index_init_row(idl, class);
}

/*  This function is used to compare "nbrec_logical_switch_port" records on table in iteration loops for compound-index operations.
    After been called, cursor point to current position in the index
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct "nbrec_logical_switch_port" *const_data1,  const struct "nbrec_logical_switch_port" *const_data2. Data to be compared.
    Return value: 0 if both data values are equal, -1 if first parameter is less than second and 1 otherwise. */
int
nbrec_logical_switch_port_index_compare(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_logical_switch_port *const_data1,  const struct nbrec_logical_switch_port *const_data2)
{
    struct nbrec_logical_switch_port *data1 = CONST_CAST(struct nbrec_logical_switch_port *, const_data1);
    struct nbrec_logical_switch_port *data2 = CONST_CAST(struct nbrec_logical_switch_port *, const_data2);
    return ovsdb_idl_index_compare(cursor, &data1->header_, &data2->header_);
}

/*  This function is called to position the cursor at the first row in "nbrec_logical_switch_port" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The first row in the corresponding index. */
const struct nbrec_logical_switch_port *
nbrec_logical_switch_port_index_first(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_logical_switch_port_cast(ovsdb_idl_index_first(cursor));
}

/*  This function is called to position the cursor at the next row in "nbrec_logical_switch_port" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The next row in the corresponding index. */
const struct nbrec_logical_switch_port *
nbrec_logical_switch_port_index_next(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_logical_switch_port_cast(ovsdb_idl_index_next(cursor));
}

/*  This function is used to find the data of the row in "nbrec_logical_switch_port" table that meet criteria with the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_logical_switch_port *const_data. Data to be searched.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_logical_switch_port *
nbrec_logical_switch_port_index_find(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_logical_switch_port *const_data)
{
    struct nbrec_logical_switch_port *data = CONST_CAST(struct nbrec_logical_switch_port *, const_data);
    return nbrec_logical_switch_port_cast(ovsdb_idl_index_find(cursor, &data->header_));
}

/*  This function is used to set the cursor pointing to the row in "nbrec_logical_switch_port" table that meet criteria of the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_logical_switch_port *const_data. Data to be searched.
    Return value: The row in the corresponding index closest to the criteria. */
const struct nbrec_logical_switch_port *
nbrec_logical_switch_port_index_forward_to(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_logical_switch_port *const_data)
{
    struct nbrec_logical_switch_port *data = CONST_CAST(struct nbrec_logical_switch_port *, const_data);
    return nbrec_logical_switch_port_cast(ovsdb_idl_index_forward_to(cursor, &data->header_));
}

/*  This function is used to get the data of the row in the current position pointed by the cursor in
    "nbrec_logical_switch_port" table.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_logical_switch_port *
nbrec_logical_switch_port_index_get_data(const struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_logical_switch_port_cast(ovsdb_idl_index_data(CONST_CAST(struct ovsdb_idl_index_cursor *, cursor)));
}

/* Sets the "addresses" column from the "Logical_Switch_Port" table in 'row' to
 * the 'addresses' set with 'n_addresses' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_index_set_addresses(const struct nbrec_logical_switch_port *row, const char **addresses, size_t n_addresses)
{
    struct ovsdb_datum datum;
    size_t i;

    datum.n = n_addresses;
    datum.keys = n_addresses ? xmalloc(n_addresses * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_addresses; i++) {
        datum.keys[i].string = xstrdup(addresses[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_switch_port_columns[ NBREC_LOGICAL_SWITCH_PORT_COL_ADDRESSES ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT]);
}

/* Sets the "dhcpv4_options" column from the "Logical_Switch_Port" table in 'row' to
 * the 'dhcpv4_options' set.
 *
 * If "dhcpv4_options" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_index_set_dhcpv4_options(const struct nbrec_logical_switch_port *row, const struct nbrec_dhcp_options *dhcpv4_options)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof (union ovsdb_atom));

    if (dhcpv4_options) {
        datum.n = 1;
        datum.keys = key;
        key->uuid = dhcpv4_options->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_switch_port_columns[ NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV4_OPTIONS ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT]);
}

/* Sets the "dhcpv6_options" column from the "Logical_Switch_Port" table in 'row' to
 * the 'dhcpv6_options' set.
 *
 * If "dhcpv6_options" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_index_set_dhcpv6_options(const struct nbrec_logical_switch_port *row, const struct nbrec_dhcp_options *dhcpv6_options)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof (union ovsdb_atom));

    if (dhcpv6_options) {
        datum.n = 1;
        datum.keys = key;
        key->uuid = dhcpv6_options->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_switch_port_columns[ NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV6_OPTIONS ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT]);
}

/* Sets the "dynamic_addresses" column from the "Logical_Switch_Port" table in 'row' to
 * the 'dynamic_addresses' set.
 *
 * If "dynamic_addresses" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_index_set_dynamic_addresses(const struct nbrec_logical_switch_port *row, const char *dynamic_addresses)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof (union ovsdb_atom));

    if (dynamic_addresses) {
        datum.n = 1;
        datum.keys = key;
        key->string = CONST_CAST(char *, dynamic_addresses);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_switch_port_columns[ NBREC_LOGICAL_SWITCH_PORT_COL_DYNAMIC_ADDRESSES ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT]);
}

/* Sets the "enabled" column from the "Logical_Switch_Port" table in 'row' to
 * the 'enabled' set with 'n_enabled' entries.
 *
 * 'n_enabled' may be 0 or 1; if it is 0, then 'enabled'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_index_set_enabled(const struct nbrec_logical_switch_port *row, const bool *enabled, size_t n_enabled)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    if (n_enabled) {
        datum.n = 1;
        datum.keys = key;
        key->boolean = *enabled;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_switch_port_columns[ NBREC_LOGICAL_SWITCH_PORT_COL_ENABLED ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT]);
}

/* Sets the "external_ids" column's value from the "Logical_Switch_Port" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_switch_port_index_set_external_ids(const struct nbrec_logical_switch_port *row, const struct smap *external_ids)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(external_ids);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_EXTERNAL_IDS],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT]);
}


/* Sets the "name" column from the "Logical_Switch_Port" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_index_set_name(const struct nbrec_logical_switch_port *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_switch_port_columns[ NBREC_LOGICAL_SWITCH_PORT_COL_NAME ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT]);
}

/* Sets the "options" column's value from the "Logical_Switch_Port" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_logical_switch_port_index_set_options(const struct nbrec_logical_switch_port *row, const struct smap *options)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (options) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(options);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, options) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_OPTIONS],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT]);
}


/* Sets the "parent_name" column from the "Logical_Switch_Port" table in 'row' to
 * the 'parent_name' set.
 *
 * If "parent_name" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_index_set_parent_name(const struct nbrec_logical_switch_port *row, const char *parent_name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof (union ovsdb_atom));

    if (parent_name) {
        datum.n = 1;
        datum.keys = key;
        key->string = CONST_CAST(char *, parent_name);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_switch_port_columns[ NBREC_LOGICAL_SWITCH_PORT_COL_PARENT_NAME ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT]);
}

/* Sets the "port_security" column from the "Logical_Switch_Port" table in 'row' to
 * the 'port_security' set with 'n_port_security' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_index_set_port_security(const struct nbrec_logical_switch_port *row, const char **port_security, size_t n_port_security)
{
    struct ovsdb_datum datum;
    size_t i;

    datum.n = n_port_security;
    datum.keys = n_port_security ? xmalloc(n_port_security * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_port_security; i++) {
        datum.keys[i].string = xstrdup(port_security[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_switch_port_columns[ NBREC_LOGICAL_SWITCH_PORT_COL_PORT_SECURITY ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT]);
}

/* Sets the "tag" column from the "Logical_Switch_Port" table in 'row' to
 * the 'tag' set with 'n_tag' entries.
 *
 * 'n_tag' may be 0 or 1; if it is 0, then 'tag'
 * may be NULL.
 *
 * Argument constraints: in range 1 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_index_set_tag(const struct nbrec_logical_switch_port *row, const int64_t *tag, size_t n_tag)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    if (n_tag) {
        datum.n = 1;
        datum.keys = key;
        key->integer = *tag;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_switch_port_columns[ NBREC_LOGICAL_SWITCH_PORT_COL_TAG ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT]);
}

/* Sets the "tag_request" column from the "Logical_Switch_Port" table in 'row' to
 * the 'tag_request' set with 'n_tag_request' entries.
 *
 * 'n_tag_request' may be 0 or 1; if it is 0, then 'tag_request'
 * may be NULL.
 *
 * Argument constraints: in range 0 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_index_set_tag_request(const struct nbrec_logical_switch_port *row, const int64_t *tag_request, size_t n_tag_request)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    if (n_tag_request) {
        datum.n = 1;
        datum.keys = key;
        key->integer = *tag_request;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_switch_port_columns[ NBREC_LOGICAL_SWITCH_PORT_COL_TAG_REQUEST ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT]);
}

/* Sets the "type" column from the "Logical_Switch_Port" table in 'row' to
 * 'type'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_index_set_type(const struct nbrec_logical_switch_port *row, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_switch_port_columns[ NBREC_LOGICAL_SWITCH_PORT_COL_TYPE ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT]);
}

/* Sets the "up" column from the "Logical_Switch_Port" table in 'row' to
 * the 'up' set with 'n_up' entries.
 *
 * 'n_up' may be 0 or 1; if it is 0, then 'up'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_index_set_up(const struct nbrec_logical_switch_port *row, const bool *up, size_t n_up)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    if (n_up) {
        datum.n = 1;
        datum.keys = key;
        key->boolean = *up;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_logical_switch_port_columns[ NBREC_LOGICAL_SWITCH_PORT_COL_UP ], &datum, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT]);
}

struct ovsdb_idl_column nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_N_COLUMNS];

void
nbrec_logical_switch_port_set_condition(struct ovsdb_idl *idl, struct ovsdb_idl_condition *condition)
{
    ovsdb_idl_set_condition(idl, &nbrec_table_logical_switch_port, condition);
}

struct ovsdb_idl_column nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_N_COLUMNS] = {
    [NBREC_LOGICAL_SWITCH_PORT_COL_ADDRESSES] = {
         .name = "addresses",
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
         .parse = nbrec_logical_switch_port_parse_addresses,
         .unparse = nbrec_logical_switch_port_unparse_addresses,
    },

    [NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV4_OPTIONS] = {
         .name = "dhcpv4_options",
         .type = {
            .key = {
               .type = OVSDB_TYPE_UUID,
               .u.uuid = { .refTableName = "DHCP_Options", .refType = OVSDB_REF_WEAK },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_logical_switch_port_parse_dhcpv4_options,
         .unparse = nbrec_logical_switch_port_unparse_dhcpv4_options,
    },

    [NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV6_OPTIONS] = {
         .name = "dhcpv6_options",
         .type = {
            .key = {
               .type = OVSDB_TYPE_UUID,
               .u.uuid = { .refTableName = "DHCP_Options", .refType = OVSDB_REF_WEAK },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_logical_switch_port_parse_dhcpv6_options,
         .unparse = nbrec_logical_switch_port_unparse_dhcpv6_options,
    },

    [NBREC_LOGICAL_SWITCH_PORT_COL_DYNAMIC_ADDRESSES] = {
         .name = "dynamic_addresses",
         .type = {
            .key = {
               .type = OVSDB_TYPE_STRING,
               .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_logical_switch_port_parse_dynamic_addresses,
         .unparse = nbrec_logical_switch_port_unparse_dynamic_addresses,
    },

    [NBREC_LOGICAL_SWITCH_PORT_COL_ENABLED] = {
         .name = "enabled",
         .type = {
            .key = {
               .type = OVSDB_TYPE_BOOLEAN,
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_logical_switch_port_parse_enabled,
         .unparse = nbrec_logical_switch_port_unparse_enabled,
    },

    [NBREC_LOGICAL_SWITCH_PORT_COL_EXTERNAL_IDS] = {
         .name = "external_ids",
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
         .parse = nbrec_logical_switch_port_parse_external_ids,
         .unparse = nbrec_logical_switch_port_unparse_external_ids,
    },

    [NBREC_LOGICAL_SWITCH_PORT_COL_NAME] = {
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
         .parse = nbrec_logical_switch_port_parse_name,
         .unparse = nbrec_logical_switch_port_unparse_name,
    },

    [NBREC_LOGICAL_SWITCH_PORT_COL_OPTIONS] = {
         .name = "options",
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
         .parse = nbrec_logical_switch_port_parse_options,
         .unparse = nbrec_logical_switch_port_unparse_options,
    },

    [NBREC_LOGICAL_SWITCH_PORT_COL_PARENT_NAME] = {
         .name = "parent_name",
         .type = {
            .key = {
               .type = OVSDB_TYPE_STRING,
               .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_logical_switch_port_parse_parent_name,
         .unparse = nbrec_logical_switch_port_unparse_parent_name,
    },

    [NBREC_LOGICAL_SWITCH_PORT_COL_PORT_SECURITY] = {
         .name = "port_security",
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
         .parse = nbrec_logical_switch_port_parse_port_security,
         .unparse = nbrec_logical_switch_port_unparse_port_security,
    },

    [NBREC_LOGICAL_SWITCH_PORT_COL_TAG] = {
         .name = "tag",
         .type = {
            .key = {
               .type = OVSDB_TYPE_INTEGER,
               .u.integer = { .min = INT64_C(1), .max = INT64_C(4095) },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_logical_switch_port_parse_tag,
         .unparse = nbrec_logical_switch_port_unparse_tag,
    },

    [NBREC_LOGICAL_SWITCH_PORT_COL_TAG_REQUEST] = {
         .name = "tag_request",
         .type = {
            .key = {
               .type = OVSDB_TYPE_INTEGER,
               .u.integer = { .min = INT64_C(0), .max = INT64_C(4095) },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_logical_switch_port_parse_tag_request,
         .unparse = nbrec_logical_switch_port_unparse_tag_request,
    },

    [NBREC_LOGICAL_SWITCH_PORT_COL_TYPE] = {
         .name = "type",
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
         .parse = nbrec_logical_switch_port_parse_type,
         .unparse = nbrec_logical_switch_port_unparse_type,
    },

    [NBREC_LOGICAL_SWITCH_PORT_COL_UP] = {
         .name = "up",
         .type = {
            .key = {
               .type = OVSDB_TYPE_BOOLEAN,
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_logical_switch_port_parse_up,
         .unparse = nbrec_logical_switch_port_unparse_up,
    },

};

/* NAT table. */

static void
nbrec_nat_parse_external_ip(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_nat *row = nbrec_nat_cast(row_);

    if (datum->n >= 1) {
        row->external_ip = datum->keys[0].string;
    } else {
        row->external_ip = "";
    }
}

static void
nbrec_nat_parse_external_mac(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_nat *row = nbrec_nat_cast(row_);

    if (datum->n >= 1) {
        row->external_mac = datum->keys[0].string;
    } else {
        row->external_mac = NULL;
    }
}

static void
nbrec_nat_parse_logical_ip(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_nat *row = nbrec_nat_cast(row_);

    if (datum->n >= 1) {
        row->logical_ip = datum->keys[0].string;
    } else {
        row->logical_ip = "";
    }
}

static void
nbrec_nat_parse_logical_port(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_nat *row = nbrec_nat_cast(row_);

    if (datum->n >= 1) {
        row->logical_port = datum->keys[0].string;
    } else {
        row->logical_port = NULL;
    }
}

static void
nbrec_nat_parse_type(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_nat *row = nbrec_nat_cast(row_);

    if (datum->n >= 1) {
        row->type = datum->keys[0].string;
    } else {
        row->type = "";
    }
}

static void
nbrec_nat_unparse_external_ip(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_nat_unparse_external_mac(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_nat_unparse_logical_ip(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_nat_unparse_logical_port(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_nat_unparse_type(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_nat_init__(struct ovsdb_idl_row *row)
{
    nbrec_nat_init(nbrec_nat_cast(row));
}

/* Clears the contents of 'row' in table "NAT". */
void
nbrec_nat_init(struct nbrec_nat *row)
{
    memset(row, 0, sizeof *row); 
    row->external_ip = "";
    row->logical_ip = "";
    row->type = "";
}

/* Searches table "NAT" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_nat *
nbrec_nat_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_nat_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_nat, uuid));
}

/* Returns a row in table "NAT" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_nat *
nbrec_nat_first(const struct ovsdb_idl *idl)
{
    return nbrec_nat_cast(ovsdb_idl_first_row(idl, &nbrec_table_nat));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_nat *
nbrec_nat_next(const struct nbrec_nat *row)
{
    return nbrec_nat_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_nat_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_nat);
}

unsigned int nbrec_nat_row_get_seqno(const struct nbrec_nat *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_nat *
nbrec_nat_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_nat_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_nat));
}

const struct nbrec_nat
*nbrec_nat_track_get_next(const struct nbrec_nat *row)
{
    return nbrec_nat_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "NAT".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_nat_delete(const struct nbrec_nat *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "NAT" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_nat *
nbrec_nat_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_nat_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_nat, NULL));
}

bool
nbrec_nat_is_updated(const struct nbrec_nat *row, enum nbrec_nat_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_nat_columns[column]);
}

/* Causes the original contents of column "external_ip" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ip" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ip" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ip" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_nat_insert()).
 *
 *   - If "external_ip" has already been modified (with
 *     nbrec_nat_set_external_ip()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_nat_set_external_ip() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_nat_verify_external_ip(const struct nbrec_nat *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_nat_col_external_ip);
}

/* Causes the original contents of column "external_mac" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_mac" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_mac" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_mac" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_nat_insert()).
 *
 *   - If "external_mac" has already been modified (with
 *     nbrec_nat_set_external_mac()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_nat_set_external_mac() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_nat_verify_external_mac(const struct nbrec_nat *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_nat_col_external_mac);
}

/* Causes the original contents of column "logical_ip" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "logical_ip" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "logical_ip" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "logical_ip" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_nat_insert()).
 *
 *   - If "logical_ip" has already been modified (with
 *     nbrec_nat_set_logical_ip()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_nat_set_logical_ip() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_nat_verify_logical_ip(const struct nbrec_nat *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_nat_col_logical_ip);
}

/* Causes the original contents of column "logical_port" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "logical_port" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "logical_port" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "logical_port" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_nat_insert()).
 *
 *   - If "logical_port" has already been modified (with
 *     nbrec_nat_set_logical_port()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_nat_set_logical_port() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_nat_verify_logical_port(const struct nbrec_nat *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_nat_col_logical_port);
}

/* Causes the original contents of column "type" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "type" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "type" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "type" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_nat_insert()).
 *
 *   - If "type" has already been modified (with
 *     nbrec_nat_set_type()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_nat_set_type() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_nat_verify_type(const struct nbrec_nat *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_nat_col_type);
}

/* Returns the "external_ip" column's value from the "NAT" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ip's
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
 * directly through the "external_ip" member in nbrec_nat. */
const struct ovsdb_datum *
nbrec_nat_get_external_ip(const struct nbrec_nat *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_nat_col_external_ip);
}

/* Returns the "external_mac" column's value from the "NAT" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_mac's
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
 * directly through the "external_mac" member in nbrec_nat. */
const struct ovsdb_datum *
nbrec_nat_get_external_mac(const struct nbrec_nat *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_nat_col_external_mac);
}

/* Returns the "logical_ip" column's value from the "NAT" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes logical_ip's
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
 * directly through the "logical_ip" member in nbrec_nat. */
const struct ovsdb_datum *
nbrec_nat_get_logical_ip(const struct nbrec_nat *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_nat_col_logical_ip);
}

/* Returns the "logical_port" column's value from the "NAT" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes logical_port's
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
 * directly through the "logical_port" member in nbrec_nat. */
const struct ovsdb_datum *
nbrec_nat_get_logical_port(const struct nbrec_nat *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_nat_col_logical_port);
}

/* Returns the "type" column's value from the "NAT" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes type's
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
 * directly through the "type" member in nbrec_nat. */
const struct ovsdb_datum *
nbrec_nat_get_type(const struct nbrec_nat *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_nat_col_type);
}

/* Sets the "external_ip" column from the "NAT" table in 'row' to
 * 'external_ip'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_set_external_ip(const struct nbrec_nat *row, const char *external_ip)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, external_ip);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_nat_col_external_ip, &datum);
}

/* Sets the "external_mac" column from the "NAT" table in 'row' to
 * the 'external_mac' set.
 *
 * If "external_mac" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_set_external_mac(const struct nbrec_nat *row, const char *external_mac)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (external_mac) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, external_mac);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_nat_col_external_mac, &datum);
}

/* Sets the "logical_ip" column from the "NAT" table in 'row' to
 * 'logical_ip'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_set_logical_ip(const struct nbrec_nat *row, const char *logical_ip)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, logical_ip);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_nat_col_logical_ip, &datum);
}

/* Sets the "logical_port" column from the "NAT" table in 'row' to
 * the 'logical_port' set.
 *
 * If "logical_port" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_set_logical_port(const struct nbrec_nat *row, const char *logical_port)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (logical_port) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, logical_port);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_nat_col_logical_port, &datum);
}

/* Sets the "type" column from the "NAT" table in 'row' to
 * 'type'.
 *
 * Argument constraints: one of "dnat", "dnat_and_snat", or "snat"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_set_type(const struct nbrec_nat *row, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_nat_col_type, &datum);
}

/* Adds the value 'new_value' to the "external_mac" set column from the "NAT" table
 * in 'row'.
 *
 */
void
nbrec_nat_update_external_mac_addvalue(const struct nbrec_nat *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_nat_col_external_mac,
                                    datum);
}

/* Deletes the value 'delete_value' from the "external_mac" set column from the
 * "NAT" table in 'row'.
 *
 */
void
nbrec_nat_update_external_mac_delvalue(const struct nbrec_nat *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_nat_col_external_mac,
                                    datum);
}

/* Adds the value 'new_value' to the "logical_port" set column from the "NAT" table
 * in 'row'.
 *
 */
void
nbrec_nat_update_logical_port_addvalue(const struct nbrec_nat *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_nat_col_logical_port,
                                    datum);
}

/* Deletes the value 'delete_value' from the "logical_port" set column from the
 * "NAT" table in 'row'.
 *
 */
void
nbrec_nat_update_logical_port_delvalue(const struct nbrec_nat *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_nat_col_logical_port,
                                    datum);
}

/* Sets the "external_ip" column from the "NAT" table in 'row' to
 * 'external_ip'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_add_clause_external_ip(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *external_ip)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, external_ip);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_nat_col_external_ip,
                          &datum);
}

/* Sets the "external_mac" column from the "NAT" table in 'row' to
 * the 'external_mac' set.
 *
 * If "external_mac" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_add_clause_external_mac(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *external_mac)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (external_mac) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, external_mac);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_nat_col_external_mac,
                          &datum);
}

/* Sets the "logical_ip" column from the "NAT" table in 'row' to
 * 'logical_ip'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_add_clause_logical_ip(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *logical_ip)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, logical_ip);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_nat_col_logical_ip,
                          &datum);
}

/* Sets the "logical_port" column from the "NAT" table in 'row' to
 * the 'logical_port' set.
 *
 * If "logical_port" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_add_clause_logical_port(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *logical_port)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (logical_port) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, logical_port);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_nat_col_logical_port,
                          &datum);
}

/* Sets the "type" column from the "NAT" table in 'row' to
 * 'type'.
 *
 * Argument constraints: one of "dnat", "dnat_and_snat", or "snat"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_add_clause_type(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_nat_col_type,
                          &datum);
}

/* Destroy 'row' of kind "NAT". The row must have been
 * created with ovsdb_idl_index_init_row.
 */
void
nbrec_nat_index_destroy_row(const struct nbrec_nat *row)
{
    ovsdb_idl_index_destroy_row__(&row->header_);
}
        

/* Creates a new row of kind "NAT". */
struct nbrec_nat *
nbrec_nat_index_init_row(struct ovsdb_idl *idl, const struct ovsdb_idl_table_class *class)
{
    return (struct nbrec_nat *) ovsdb_idl_index_init_row(idl, class);
}

/*  This function is used to compare "nbrec_nat" records on table in iteration loops for compound-index operations.
    After been called, cursor point to current position in the index
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct "nbrec_nat" *const_data1,  const struct "nbrec_nat" *const_data2. Data to be compared.
    Return value: 0 if both data values are equal, -1 if first parameter is less than second and 1 otherwise. */
int
nbrec_nat_index_compare(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_nat *const_data1,  const struct nbrec_nat *const_data2)
{
    struct nbrec_nat *data1 = CONST_CAST(struct nbrec_nat *, const_data1);
    struct nbrec_nat *data2 = CONST_CAST(struct nbrec_nat *, const_data2);
    return ovsdb_idl_index_compare(cursor, &data1->header_, &data2->header_);
}

/*  This function is called to position the cursor at the first row in "nbrec_nat" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The first row in the corresponding index. */
const struct nbrec_nat *
nbrec_nat_index_first(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_nat_cast(ovsdb_idl_index_first(cursor));
}

/*  This function is called to position the cursor at the next row in "nbrec_nat" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The next row in the corresponding index. */
const struct nbrec_nat *
nbrec_nat_index_next(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_nat_cast(ovsdb_idl_index_next(cursor));
}

/*  This function is used to find the data of the row in "nbrec_nat" table that meet criteria with the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_nat *const_data. Data to be searched.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_nat *
nbrec_nat_index_find(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_nat *const_data)
{
    struct nbrec_nat *data = CONST_CAST(struct nbrec_nat *, const_data);
    return nbrec_nat_cast(ovsdb_idl_index_find(cursor, &data->header_));
}

/*  This function is used to set the cursor pointing to the row in "nbrec_nat" table that meet criteria of the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_nat *const_data. Data to be searched.
    Return value: The row in the corresponding index closest to the criteria. */
const struct nbrec_nat *
nbrec_nat_index_forward_to(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_nat *const_data)
{
    struct nbrec_nat *data = CONST_CAST(struct nbrec_nat *, const_data);
    return nbrec_nat_cast(ovsdb_idl_index_forward_to(cursor, &data->header_));
}

/*  This function is used to get the data of the row in the current position pointed by the cursor in
    "nbrec_nat" table.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_nat *
nbrec_nat_index_get_data(const struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_nat_cast(ovsdb_idl_index_data(CONST_CAST(struct ovsdb_idl_index_cursor *, cursor)));
}

/* Sets the "external_ip" column from the "NAT" table in 'row' to
 * 'external_ip'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_index_set_external_ip(const struct nbrec_nat *row, const char *external_ip)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, external_ip);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_nat_columns[ NBREC_NAT_COL_EXTERNAL_IP ], &datum, &nbrec_table_classes[NBREC_TABLE_NAT]);
}

/* Sets the "external_mac" column from the "NAT" table in 'row' to
 * the 'external_mac' set.
 *
 * If "external_mac" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_index_set_external_mac(const struct nbrec_nat *row, const char *external_mac)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof (union ovsdb_atom));

    if (external_mac) {
        datum.n = 1;
        datum.keys = key;
        key->string = CONST_CAST(char *, external_mac);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_nat_columns[ NBREC_NAT_COL_EXTERNAL_MAC ], &datum, &nbrec_table_classes[NBREC_TABLE_NAT]);
}

/* Sets the "logical_ip" column from the "NAT" table in 'row' to
 * 'logical_ip'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_index_set_logical_ip(const struct nbrec_nat *row, const char *logical_ip)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, logical_ip);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_nat_columns[ NBREC_NAT_COL_LOGICAL_IP ], &datum, &nbrec_table_classes[NBREC_TABLE_NAT]);
}

/* Sets the "logical_port" column from the "NAT" table in 'row' to
 * the 'logical_port' set.
 *
 * If "logical_port" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_index_set_logical_port(const struct nbrec_nat *row, const char *logical_port)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof (union ovsdb_atom));

    if (logical_port) {
        datum.n = 1;
        datum.keys = key;
        key->string = CONST_CAST(char *, logical_port);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_nat_columns[ NBREC_NAT_COL_LOGICAL_PORT ], &datum, &nbrec_table_classes[NBREC_TABLE_NAT]);
}

/* Sets the "type" column from the "NAT" table in 'row' to
 * 'type'.
 *
 * Argument constraints: one of "dnat", "dnat_and_snat", or "snat"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_index_set_type(const struct nbrec_nat *row, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_nat_columns[ NBREC_NAT_COL_TYPE ], &datum, &nbrec_table_classes[NBREC_TABLE_NAT]);
}

struct ovsdb_idl_column nbrec_nat_columns[NBREC_NAT_N_COLUMNS];

void
nbrec_nat_set_condition(struct ovsdb_idl *idl, struct ovsdb_idl_condition *condition)
{
    ovsdb_idl_set_condition(idl, &nbrec_table_nat, condition);
}
static union ovsdb_atom NAT_col_type_key_enum_keys[3] = {
    { .string = "dnat" },
    { .string = "dnat_and_snat" },
    { .string = "snat" },
};
static struct ovsdb_datum NAT_col_type_key_enum = {
    .n = 3,
    .keys = NAT_col_type_key_enum_keys,
};

struct ovsdb_idl_column nbrec_nat_columns[NBREC_NAT_N_COLUMNS] = {
    [NBREC_NAT_COL_EXTERNAL_IP] = {
         .name = "external_ip",
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
         .parse = nbrec_nat_parse_external_ip,
         .unparse = nbrec_nat_unparse_external_ip,
    },

    [NBREC_NAT_COL_EXTERNAL_MAC] = {
         .name = "external_mac",
         .type = {
            .key = {
               .type = OVSDB_TYPE_STRING,
               .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_nat_parse_external_mac,
         .unparse = nbrec_nat_unparse_external_mac,
    },

    [NBREC_NAT_COL_LOGICAL_IP] = {
         .name = "logical_ip",
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
         .parse = nbrec_nat_parse_logical_ip,
         .unparse = nbrec_nat_unparse_logical_ip,
    },

    [NBREC_NAT_COL_LOGICAL_PORT] = {
         .name = "logical_port",
         .type = {
            .key = {
               .type = OVSDB_TYPE_STRING,
               .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_nat_parse_logical_port,
         .unparse = nbrec_nat_unparse_logical_port,
    },

    [NBREC_NAT_COL_TYPE] = {
         .name = "type",
         .type = {
            .key = {
               .type = OVSDB_TYPE_STRING,
               .enum_ = &NAT_col_type_key_enum,
               .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 1,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_nat_parse_type,
         .unparse = nbrec_nat_unparse_type,
    },

};

/* NB_Global table. */

static void
nbrec_nb_global_parse_connections(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_nb_global *row = nbrec_nb_global_cast(row_);
    row->connections = NULL;
    row->n_connections = 0;
    for (size_t i = 0; i < datum->n; i++) {
        struct nbrec_connection *keyRow = nbrec_connection_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_connection, &datum->keys[i].uuid));
        if (!keyRow) {
            continue;
        }
        if (!row->n_connections) {
            row->connections = xmalloc(datum->n * sizeof *row->connections);
        }
        row->connections[row->n_connections] = keyRow;
        row->n_connections++;
    }
}

static void
nbrec_nb_global_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_nb_global *row = nbrec_nb_global_cast(row_);
    smap_init(&row->external_ids);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_nb_global_parse_hv_cfg(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_nb_global *row = nbrec_nb_global_cast(row_);

    if (datum->n >= 1) {
        row->hv_cfg = datum->keys[0].integer;
    } else {
        row->hv_cfg = 0;
    }
}

static void
nbrec_nb_global_parse_nb_cfg(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_nb_global *row = nbrec_nb_global_cast(row_);

    if (datum->n >= 1) {
        row->nb_cfg = datum->keys[0].integer;
    } else {
        row->nb_cfg = 0;
    }
}

static void
nbrec_nb_global_parse_sb_cfg(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_nb_global *row = nbrec_nb_global_cast(row_);

    if (datum->n >= 1) {
        row->sb_cfg = datum->keys[0].integer;
    } else {
        row->sb_cfg = 0;
    }
}

static void
nbrec_nb_global_parse_ssl(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_nb_global *row = nbrec_nb_global_cast(row_);

    if (datum->n >= 1) {
        row->ssl = nbrec_ssl_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_ssl, &datum->keys[0].uuid));
    } else {
        row->ssl = NULL;
    }
}

static void
nbrec_nb_global_unparse_connections(struct ovsdb_idl_row *row_)
{
    struct nbrec_nb_global *row = nbrec_nb_global_cast(row_);
    free(row->connections);
}

static void
nbrec_nb_global_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_nb_global *row = nbrec_nb_global_cast(row_);
    smap_destroy(&row->external_ids);
}

static void
nbrec_nb_global_unparse_hv_cfg(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_nb_global_unparse_nb_cfg(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_nb_global_unparse_sb_cfg(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_nb_global_unparse_ssl(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_nb_global_init__(struct ovsdb_idl_row *row)
{
    nbrec_nb_global_init(nbrec_nb_global_cast(row));
}

/* Clears the contents of 'row' in table "NB_Global". */
void
nbrec_nb_global_init(struct nbrec_nb_global *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
}

/* Searches table "NB_Global" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_nb_global *
nbrec_nb_global_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_nb_global_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_nb_global, uuid));
}

/* Returns a row in table "NB_Global" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_nb_global *
nbrec_nb_global_first(const struct ovsdb_idl *idl)
{
    return nbrec_nb_global_cast(ovsdb_idl_first_row(idl, &nbrec_table_nb_global));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_nb_global *
nbrec_nb_global_next(const struct nbrec_nb_global *row)
{
    return nbrec_nb_global_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_nb_global_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_nb_global);
}

unsigned int nbrec_nb_global_row_get_seqno(const struct nbrec_nb_global *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_nb_global *
nbrec_nb_global_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_nb_global_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_nb_global));
}

const struct nbrec_nb_global
*nbrec_nb_global_track_get_next(const struct nbrec_nb_global *row)
{
    return nbrec_nb_global_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "NB_Global".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_nb_global_delete(const struct nbrec_nb_global *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "NB_Global" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_nb_global *
nbrec_nb_global_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_nb_global_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_nb_global, NULL));
}

bool
nbrec_nb_global_is_updated(const struct nbrec_nb_global *row, enum nbrec_nb_global_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_nb_global_columns[column]);
}

/* Causes the original contents of column "connections" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "connections" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "connections" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "connections" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_nb_global_insert()).
 *
 *   - If "connections" has already been modified (with
 *     nbrec_nb_global_set_connections()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_nb_global_set_connections() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_nb_global_verify_connections(const struct nbrec_nb_global *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_nb_global_col_connections);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_nb_global_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_nb_global_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_nb_global_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_nb_global_verify_external_ids(const struct nbrec_nb_global *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_nb_global_col_external_ids);
}

/* Causes the original contents of column "hv_cfg" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "hv_cfg" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "hv_cfg" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "hv_cfg" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_nb_global_insert()).
 *
 *   - If "hv_cfg" has already been modified (with
 *     nbrec_nb_global_set_hv_cfg()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_nb_global_set_hv_cfg() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_nb_global_verify_hv_cfg(const struct nbrec_nb_global *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_nb_global_col_hv_cfg);
}

/* Causes the original contents of column "nb_cfg" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "nb_cfg" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "nb_cfg" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "nb_cfg" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_nb_global_insert()).
 *
 *   - If "nb_cfg" has already been modified (with
 *     nbrec_nb_global_set_nb_cfg()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_nb_global_set_nb_cfg() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_nb_global_verify_nb_cfg(const struct nbrec_nb_global *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_nb_global_col_nb_cfg);
}

/* Causes the original contents of column "sb_cfg" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "sb_cfg" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "sb_cfg" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "sb_cfg" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_nb_global_insert()).
 *
 *   - If "sb_cfg" has already been modified (with
 *     nbrec_nb_global_set_sb_cfg()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_nb_global_set_sb_cfg() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_nb_global_verify_sb_cfg(const struct nbrec_nb_global *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_nb_global_col_sb_cfg);
}

/* Causes the original contents of column "ssl" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ssl" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ssl" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ssl" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_nb_global_insert()).
 *
 *   - If "ssl" has already been modified (with
 *     nbrec_nb_global_set_ssl()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_nb_global_set_ssl() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_nb_global_verify_ssl(const struct nbrec_nb_global *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_nb_global_col_ssl);
}

/* Returns the "connections" column's value from the "NB_Global" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes connections's
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
 * directly through the "connections" member in nbrec_nb_global. */
const struct ovsdb_datum *
nbrec_nb_global_get_connections(const struct nbrec_nb_global *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_nb_global_col_connections);
}

/* Returns the "external_ids" column's value from the "NB_Global" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
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
 * directly through the "external_ids" member in nbrec_nb_global. */
const struct ovsdb_datum *
nbrec_nb_global_get_external_ids(const struct nbrec_nb_global *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_nb_global_col_external_ids);
}

/* Returns the "hv_cfg" column's value from the "NB_Global" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes hv_cfg's
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
 * directly through the "hv_cfg" member in nbrec_nb_global. */
const struct ovsdb_datum *
nbrec_nb_global_get_hv_cfg(const struct nbrec_nb_global *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &nbrec_nb_global_col_hv_cfg);
}

/* Returns the "nb_cfg" column's value from the "NB_Global" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes nb_cfg's
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
 * directly through the "nb_cfg" member in nbrec_nb_global. */
const struct ovsdb_datum *
nbrec_nb_global_get_nb_cfg(const struct nbrec_nb_global *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &nbrec_nb_global_col_nb_cfg);
}

/* Returns the "sb_cfg" column's value from the "NB_Global" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes sb_cfg's
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
 * directly through the "sb_cfg" member in nbrec_nb_global. */
const struct ovsdb_datum *
nbrec_nb_global_get_sb_cfg(const struct nbrec_nb_global *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &nbrec_nb_global_col_sb_cfg);
}

/* Returns the "ssl" column's value from the "NB_Global" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes ssl's
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
 * directly through the "ssl" member in nbrec_nb_global. */
const struct ovsdb_datum *
nbrec_nb_global_get_ssl(const struct nbrec_nb_global *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_nb_global_col_ssl);
}

/* Sets the "connections" column from the "NB_Global" table in 'row' to
 * the 'connections' set with 'n_connections' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_set_connections(const struct nbrec_nb_global *row, struct nbrec_connection **connections, size_t n_connections)
{
    struct ovsdb_datum datum;

    datum.n = n_connections;
    datum.keys = n_connections ? xmalloc(n_connections * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_connections; i++) {
        datum.keys[i].uuid = connections[i]->header_.uuid;
    }
    ovsdb_idl_txn_write(&row->header_, &nbrec_nb_global_col_connections, &datum);
}

/* Sets the "external_ids" column's value from the "NB_Global" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_nb_global_set_external_ids(const struct nbrec_nb_global *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_nb_global_col_external_ids,
                        &datum);
}


/* Sets the "hv_cfg" column from the "NB_Global" table in 'row' to
 * 'hv_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_set_hv_cfg(const struct nbrec_nb_global *row, int64_t hv_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.integer = hv_cfg;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_nb_global_col_hv_cfg, &datum);
}

/* Sets the "nb_cfg" column from the "NB_Global" table in 'row' to
 * 'nb_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_set_nb_cfg(const struct nbrec_nb_global *row, int64_t nb_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.integer = nb_cfg;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_nb_global_col_nb_cfg, &datum);
}

/* Sets the "sb_cfg" column from the "NB_Global" table in 'row' to
 * 'sb_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_set_sb_cfg(const struct nbrec_nb_global *row, int64_t sb_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.integer = sb_cfg;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_nb_global_col_sb_cfg, &datum);
}

/* Sets the "ssl" column from the "NB_Global" table in 'row' to
 * the 'ssl' set.
 *
 * If "ssl" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_set_ssl(const struct nbrec_nb_global *row, const struct nbrec_ssl *ssl)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (ssl) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = ssl->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_nb_global_col_ssl, &datum);
}

/* Adds the value 'new_value' to the "connections" set column from the "NB_Global" table
 * in 'row'.
 *
 */
void
nbrec_nb_global_update_connections_addvalue(const struct nbrec_nb_global *row, const struct nbrec_connection *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_nb_global_col_connections,
                                    datum);
}

/* Deletes the value 'delete_value' from the "connections" set column from the
 * "NB_Global" table in 'row'.
 *
 */
void
nbrec_nb_global_update_connections_delvalue(const struct nbrec_nb_global *row, const struct nbrec_connection *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_nb_global_col_connections,
                                    datum);
}

/* Sets an element of the "external_ids" map column from the "NB_Global" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_nb_global_update_external_ids_setkey(const struct nbrec_nb_global *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_nb_global_col_external_ids,
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "NB_Global" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_nb_global_update_external_ids_delkey(const struct nbrec_nb_global *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_nb_global_col_external_ids,
                                    datum);
}

/* Adds the value 'new_value' to the "ssl" set column from the "NB_Global" table
 * in 'row'.
 *
 */
void
nbrec_nb_global_update_ssl_addvalue(const struct nbrec_nb_global *row, const struct nbrec_ssl *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_nb_global_col_ssl,
                                    datum);
}

/* Deletes the value 'delete_value' from the "ssl" set column from the
 * "NB_Global" table in 'row'.
 *
 */
void
nbrec_nb_global_update_ssl_delvalue(const struct nbrec_nb_global *row, const struct nbrec_ssl *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_nb_global_col_ssl,
                                    datum);
}

/* Sets the "connections" column from the "NB_Global" table in 'row' to
 * the 'connections' set with 'n_connections' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_add_clause_connections(struct ovsdb_idl_condition *cond, enum ovsdb_function function, struct uuid **connections, size_t n_connections)
{
    struct ovsdb_datum datum;
    datum.n = n_connections;
    datum.keys = n_connections ? xmalloc(n_connections * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_connections; i++) {
        datum.keys[i].uuid = *connections[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_nb_global_col_connections,
                          &datum);
    free(datum.keys);
}

/* Sets the "external_ids" column's value from the "NB_Global" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_nb_global_add_clause_external_ids(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_nb_global_col_external_ids,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_nb_global_col_external_ids.type);
}


/* Sets the "hv_cfg" column from the "NB_Global" table in 'row' to
 * 'hv_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_add_clause_hv_cfg(struct ovsdb_idl_condition *cond, enum ovsdb_function function, int64_t hv_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.integer = hv_cfg;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_nb_global_col_hv_cfg,
                          &datum);
}

/* Sets the "nb_cfg" column from the "NB_Global" table in 'row' to
 * 'nb_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_add_clause_nb_cfg(struct ovsdb_idl_condition *cond, enum ovsdb_function function, int64_t nb_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.integer = nb_cfg;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_nb_global_col_nb_cfg,
                          &datum);
}

/* Sets the "sb_cfg" column from the "NB_Global" table in 'row' to
 * 'sb_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_add_clause_sb_cfg(struct ovsdb_idl_condition *cond, enum ovsdb_function function, int64_t sb_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.integer = sb_cfg;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_nb_global_col_sb_cfg,
                          &datum);
}

/* Sets the "ssl" column from the "NB_Global" table in 'row' to
 * the 'ssl' set.
 *
 * If "ssl" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_add_clause_ssl(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct uuid *ssl)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (ssl) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = *ssl;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_nb_global_col_ssl,
                          &datum);
}

/* Destroy 'row' of kind "NB_Global". The row must have been
 * created with ovsdb_idl_index_init_row.
 */
void
nbrec_nb_global_index_destroy_row(const struct nbrec_nb_global *row)
{
    ovsdb_idl_index_destroy_row__(&row->header_);
}
        

/* Creates a new row of kind "NB_Global". */
struct nbrec_nb_global *
nbrec_nb_global_index_init_row(struct ovsdb_idl *idl, const struct ovsdb_idl_table_class *class)
{
    return (struct nbrec_nb_global *) ovsdb_idl_index_init_row(idl, class);
}

/*  This function is used to compare "nbrec_nb_global" records on table in iteration loops for compound-index operations.
    After been called, cursor point to current position in the index
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct "nbrec_nb_global" *const_data1,  const struct "nbrec_nb_global" *const_data2. Data to be compared.
    Return value: 0 if both data values are equal, -1 if first parameter is less than second and 1 otherwise. */
int
nbrec_nb_global_index_compare(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_nb_global *const_data1,  const struct nbrec_nb_global *const_data2)
{
    struct nbrec_nb_global *data1 = CONST_CAST(struct nbrec_nb_global *, const_data1);
    struct nbrec_nb_global *data2 = CONST_CAST(struct nbrec_nb_global *, const_data2);
    return ovsdb_idl_index_compare(cursor, &data1->header_, &data2->header_);
}

/*  This function is called to position the cursor at the first row in "nbrec_nb_global" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The first row in the corresponding index. */
const struct nbrec_nb_global *
nbrec_nb_global_index_first(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_nb_global_cast(ovsdb_idl_index_first(cursor));
}

/*  This function is called to position the cursor at the next row in "nbrec_nb_global" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The next row in the corresponding index. */
const struct nbrec_nb_global *
nbrec_nb_global_index_next(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_nb_global_cast(ovsdb_idl_index_next(cursor));
}

/*  This function is used to find the data of the row in "nbrec_nb_global" table that meet criteria with the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_nb_global *const_data. Data to be searched.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_nb_global *
nbrec_nb_global_index_find(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_nb_global *const_data)
{
    struct nbrec_nb_global *data = CONST_CAST(struct nbrec_nb_global *, const_data);
    return nbrec_nb_global_cast(ovsdb_idl_index_find(cursor, &data->header_));
}

/*  This function is used to set the cursor pointing to the row in "nbrec_nb_global" table that meet criteria of the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_nb_global *const_data. Data to be searched.
    Return value: The row in the corresponding index closest to the criteria. */
const struct nbrec_nb_global *
nbrec_nb_global_index_forward_to(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_nb_global *const_data)
{
    struct nbrec_nb_global *data = CONST_CAST(struct nbrec_nb_global *, const_data);
    return nbrec_nb_global_cast(ovsdb_idl_index_forward_to(cursor, &data->header_));
}

/*  This function is used to get the data of the row in the current position pointed by the cursor in
    "nbrec_nb_global" table.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_nb_global *
nbrec_nb_global_index_get_data(const struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_nb_global_cast(ovsdb_idl_index_data(CONST_CAST(struct ovsdb_idl_index_cursor *, cursor)));
}

/* Sets the "connections" column from the "NB_Global" table in 'row' to
 * the 'connections' set with 'n_connections' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_index_set_connections(const struct nbrec_nb_global *row, struct nbrec_connection **connections, size_t n_connections)
{
    struct ovsdb_datum datum;
    size_t i;

    datum.n = n_connections;
    datum.keys = n_connections ? xmalloc(n_connections * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_connections; i++) {
        datum.keys[i].uuid = connections[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_nb_global_columns[ NBREC_NB_GLOBAL_COL_CONNECTIONS ], &datum, &nbrec_table_classes[NBREC_TABLE_NB_GLOBAL]);
}

/* Sets the "external_ids" column's value from the "NB_Global" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_nb_global_index_set_external_ids(const struct nbrec_nb_global *row, const struct smap *external_ids)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(external_ids);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_EXTERNAL_IDS],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_NB_GLOBAL]);
}


/* Sets the "hv_cfg" column from the "NB_Global" table in 'row' to
 * 'hv_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_index_set_hv_cfg(const struct nbrec_nb_global *row, int64_t hv_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->integer = hv_cfg;
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_nb_global_columns[ NBREC_NB_GLOBAL_COL_HV_CFG ], &datum, &nbrec_table_classes[NBREC_TABLE_NB_GLOBAL]);
}

/* Sets the "nb_cfg" column from the "NB_Global" table in 'row' to
 * 'nb_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_index_set_nb_cfg(const struct nbrec_nb_global *row, int64_t nb_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->integer = nb_cfg;
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_nb_global_columns[ NBREC_NB_GLOBAL_COL_NB_CFG ], &datum, &nbrec_table_classes[NBREC_TABLE_NB_GLOBAL]);
}

/* Sets the "sb_cfg" column from the "NB_Global" table in 'row' to
 * 'sb_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_index_set_sb_cfg(const struct nbrec_nb_global *row, int64_t sb_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->integer = sb_cfg;
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_nb_global_columns[ NBREC_NB_GLOBAL_COL_SB_CFG ], &datum, &nbrec_table_classes[NBREC_TABLE_NB_GLOBAL]);
}

/* Sets the "ssl" column from the "NB_Global" table in 'row' to
 * the 'ssl' set.
 *
 * If "ssl" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_index_set_ssl(const struct nbrec_nb_global *row, const struct nbrec_ssl *ssl)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof (union ovsdb_atom));

    if (ssl) {
        datum.n = 1;
        datum.keys = key;
        key->uuid = ssl->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_nb_global_columns[ NBREC_NB_GLOBAL_COL_SSL ], &datum, &nbrec_table_classes[NBREC_TABLE_NB_GLOBAL]);
}

struct ovsdb_idl_column nbrec_nb_global_columns[NBREC_NB_GLOBAL_N_COLUMNS];

void
nbrec_nb_global_set_condition(struct ovsdb_idl *idl, struct ovsdb_idl_condition *condition)
{
    ovsdb_idl_set_condition(idl, &nbrec_table_nb_global, condition);
}

struct ovsdb_idl_column nbrec_nb_global_columns[NBREC_NB_GLOBAL_N_COLUMNS] = {
    [NBREC_NB_GLOBAL_COL_CONNECTIONS] = {
         .name = "connections",
         .type = {
            .key = {
               .type = OVSDB_TYPE_UUID,
               .u.uuid = { .refTableName = "Connection", .refType = OVSDB_REF_STRONG },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = UINT_MAX,
         },
         .mutable = true,
         .parse = nbrec_nb_global_parse_connections,
         .unparse = nbrec_nb_global_unparse_connections,
    },

    [NBREC_NB_GLOBAL_COL_EXTERNAL_IDS] = {
         .name = "external_ids",
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
         .parse = nbrec_nb_global_parse_external_ids,
         .unparse = nbrec_nb_global_unparse_external_ids,
    },

    [NBREC_NB_GLOBAL_COL_HV_CFG] = {
         .name = "hv_cfg",
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
         .parse = nbrec_nb_global_parse_hv_cfg,
         .unparse = nbrec_nb_global_unparse_hv_cfg,
    },

    [NBREC_NB_GLOBAL_COL_NB_CFG] = {
         .name = "nb_cfg",
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
         .parse = nbrec_nb_global_parse_nb_cfg,
         .unparse = nbrec_nb_global_unparse_nb_cfg,
    },

    [NBREC_NB_GLOBAL_COL_SB_CFG] = {
         .name = "sb_cfg",
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
         .parse = nbrec_nb_global_parse_sb_cfg,
         .unparse = nbrec_nb_global_unparse_sb_cfg,
    },

    [NBREC_NB_GLOBAL_COL_SSL] = {
         .name = "ssl",
         .type = {
            .key = {
               .type = OVSDB_TYPE_UUID,
               .u.uuid = { .refTableName = "SSL", .refType = OVSDB_REF_STRONG },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_nb_global_parse_ssl,
         .unparse = nbrec_nb_global_unparse_ssl,
    },

};

/* QoS table. */

static void
nbrec_qos_parse_action(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_qos *row = nbrec_qos_cast(row_);

    if (datum->n >= 1) {
        row->key_action = datum->keys[0].string;
        row->value_action = datum->values[0].integer;
    } else {
        row->key_action = "";
        row->value_action = 0;
    }
}

static void
nbrec_qos_parse_direction(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_qos *row = nbrec_qos_cast(row_);

    if (datum->n >= 1) {
        row->direction = datum->keys[0].string;
    } else {
        row->direction = "";
    }
}

static void
nbrec_qos_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_qos *row = nbrec_qos_cast(row_);
    smap_init(&row->external_ids);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_qos_parse_match(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_qos *row = nbrec_qos_cast(row_);

    if (datum->n >= 1) {
        row->match = datum->keys[0].string;
    } else {
        row->match = "";
    }
}

static void
nbrec_qos_parse_priority(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_qos *row = nbrec_qos_cast(row_);

    if (datum->n >= 1) {
        row->priority = datum->keys[0].integer;
    } else {
        row->priority = 0;
    }
}

static void
nbrec_qos_unparse_action(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_qos_unparse_direction(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_qos_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_qos *row = nbrec_qos_cast(row_);
    smap_destroy(&row->external_ids);
}

static void
nbrec_qos_unparse_match(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_qos_unparse_priority(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_qos_init__(struct ovsdb_idl_row *row)
{
    nbrec_qos_init(nbrec_qos_cast(row));
}

/* Clears the contents of 'row' in table "QoS". */
void
nbrec_qos_init(struct nbrec_qos *row)
{
    memset(row, 0, sizeof *row); 
    row->direction = "";
    smap_init(&row->external_ids);
    row->match = "";
}

/* Searches table "QoS" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_qos *
nbrec_qos_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_qos_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_qos, uuid));
}

/* Returns a row in table "QoS" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_qos *
nbrec_qos_first(const struct ovsdb_idl *idl)
{
    return nbrec_qos_cast(ovsdb_idl_first_row(idl, &nbrec_table_qos));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_qos *
nbrec_qos_next(const struct nbrec_qos *row)
{
    return nbrec_qos_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_qos_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_qos);
}

unsigned int nbrec_qos_row_get_seqno(const struct nbrec_qos *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_qos *
nbrec_qos_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_qos_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_qos));
}

const struct nbrec_qos
*nbrec_qos_track_get_next(const struct nbrec_qos *row)
{
    return nbrec_qos_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "QoS".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_qos_delete(const struct nbrec_qos *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "QoS" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_qos *
nbrec_qos_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_qos_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_qos, NULL));
}

bool
nbrec_qos_is_updated(const struct nbrec_qos *row, enum nbrec_qos_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_qos_columns[column]);
}

/* Causes the original contents of column "action" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "action" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "action" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "action" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_qos_insert()).
 *
 *   - If "action" has already been modified (with
 *     nbrec_qos_set_action()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_qos_set_action() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_qos_verify_action(const struct nbrec_qos *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_qos_col_action);
}

/* Causes the original contents of column "direction" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "direction" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "direction" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "direction" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_qos_insert()).
 *
 *   - If "direction" has already been modified (with
 *     nbrec_qos_set_direction()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_qos_set_direction() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_qos_verify_direction(const struct nbrec_qos *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_qos_col_direction);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_qos_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_qos_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_qos_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_qos_verify_external_ids(const struct nbrec_qos *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_qos_col_external_ids);
}

/* Causes the original contents of column "match" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "match" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "match" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "match" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_qos_insert()).
 *
 *   - If "match" has already been modified (with
 *     nbrec_qos_set_match()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_qos_set_match() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_qos_verify_match(const struct nbrec_qos *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_qos_col_match);
}

/* Causes the original contents of column "priority" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "priority" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "priority" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "priority" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_qos_insert()).
 *
 *   - If "priority" has already been modified (with
 *     nbrec_qos_set_priority()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_qos_set_priority() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_qos_verify_priority(const struct nbrec_qos *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_qos_col_priority);
}

/* Returns the "action" column's value from the "QoS" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes action's
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
 * directly through the "action" member in nbrec_qos. */
const struct ovsdb_datum *
nbrec_qos_get_action(const struct nbrec_qos *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &nbrec_qos_col_action);
}

/* Returns the "direction" column's value from the "QoS" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes direction's
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
 * directly through the "direction" member in nbrec_qos. */
const struct ovsdb_datum *
nbrec_qos_get_direction(const struct nbrec_qos *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_qos_col_direction);
}

/* Returns the "external_ids" column's value from the "QoS" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
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
 * directly through the "external_ids" member in nbrec_qos. */
const struct ovsdb_datum *
nbrec_qos_get_external_ids(const struct nbrec_qos *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_qos_col_external_ids);
}

/* Returns the "match" column's value from the "QoS" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes match's
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
 * directly through the "match" member in nbrec_qos. */
const struct ovsdb_datum *
nbrec_qos_get_match(const struct nbrec_qos *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_qos_col_match);
}

/* Returns the "priority" column's value from the "QoS" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes priority's
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
 * directly through the "priority" member in nbrec_qos. */
const struct ovsdb_datum *
nbrec_qos_get_priority(const struct nbrec_qos *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &nbrec_qos_col_priority);
}

/* Sets the "action" column from the "QoS" table in 'row' to
 * the map with key 'key_action' and value 'value_action'
 *.
 *
 * Argument constraints: key must be "dscp", value in range 0 to 63
 *
 * The caller retains ownership of the arguments. */
void
nbrec_qos_set_action(const struct nbrec_qos *row, const char *key_action, int64_t value_action)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;
    union ovsdb_atom value;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, key_action);
    datum.values = &value;
    value.integer = value_action;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_qos_col_action, &datum);
}

/* Sets the "direction" column from the "QoS" table in 'row' to
 * 'direction'.
 *
 * Argument constraints: either "from-lport" or "to-lport"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_qos_set_direction(const struct nbrec_qos *row, const char *direction)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, direction);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_qos_col_direction, &datum);
}

/* Sets the "external_ids" column's value from the "QoS" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_qos_set_external_ids(const struct nbrec_qos *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_qos_col_external_ids,
                        &datum);
}


/* Sets the "match" column from the "QoS" table in 'row' to
 * 'match'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_qos_set_match(const struct nbrec_qos *row, const char *match)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, match);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_qos_col_match, &datum);
}

/* Sets the "priority" column from the "QoS" table in 'row' to
 * 'priority'.
 *
 * Argument constraints: in range 0 to 32,767
 *
 * The caller retains ownership of the arguments. */
void
nbrec_qos_set_priority(const struct nbrec_qos *row, int64_t priority)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.integer = priority;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_qos_col_priority, &datum);
}

/* Sets an element of the "action" map column from the "QoS" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_qos_update_action_setkey(const struct nbrec_qos *row, const char *new_key, int64_t new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].integer = new_value;

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_qos_col_action,
                                    datum);
}

/* Deletes an element of the "action" map column from the "QoS" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_qos_update_action_delkey(const struct nbrec_qos *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_qos_col_action,
                                    datum);
}

/* Sets an element of the "external_ids" map column from the "QoS" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_qos_update_external_ids_setkey(const struct nbrec_qos *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_qos_col_external_ids,
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "QoS" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_qos_update_external_ids_delkey(const struct nbrec_qos *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_qos_col_external_ids,
                                    datum);
}

/* Sets the "action" column from the "QoS" table in 'row' to
 * the map with key 'key_action' and value 'value_action'
 *.
 *
 * Argument constraints: key must be "dscp", value in range 0 to 63
 *
 * The caller retains ownership of the arguments. */
void
nbrec_qos_add_clause_action(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *key_action, int64_t value_action)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;
    union ovsdb_atom value;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, key_action);
    datum.values = &value;
    value.integer = value_action;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_qos_col_action,
                          &datum);
}

/* Sets the "direction" column from the "QoS" table in 'row' to
 * 'direction'.
 *
 * Argument constraints: either "from-lport" or "to-lport"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_qos_add_clause_direction(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *direction)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, direction);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_qos_col_direction,
                          &datum);
}

/* Sets the "external_ids" column's value from the "QoS" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_qos_add_clause_external_ids(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_qos_col_external_ids,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_qos_col_external_ids.type);
}


/* Sets the "match" column from the "QoS" table in 'row' to
 * 'match'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_qos_add_clause_match(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *match)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, match);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_qos_col_match,
                          &datum);
}

/* Sets the "priority" column from the "QoS" table in 'row' to
 * 'priority'.
 *
 * Argument constraints: in range 0 to 32,767
 *
 * The caller retains ownership of the arguments. */
void
nbrec_qos_add_clause_priority(struct ovsdb_idl_condition *cond, enum ovsdb_function function, int64_t priority)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.integer = priority;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_qos_col_priority,
                          &datum);
}

/* Destroy 'row' of kind "QoS". The row must have been
 * created with ovsdb_idl_index_init_row.
 */
void
nbrec_qos_index_destroy_row(const struct nbrec_qos *row)
{
    ovsdb_idl_index_destroy_row__(&row->header_);
}
        

/* Creates a new row of kind "QoS". */
struct nbrec_qos *
nbrec_qos_index_init_row(struct ovsdb_idl *idl, const struct ovsdb_idl_table_class *class)
{
    return (struct nbrec_qos *) ovsdb_idl_index_init_row(idl, class);
}

/*  This function is used to compare "nbrec_qos" records on table in iteration loops for compound-index operations.
    After been called, cursor point to current position in the index
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct "nbrec_qos" *const_data1,  const struct "nbrec_qos" *const_data2. Data to be compared.
    Return value: 0 if both data values are equal, -1 if first parameter is less than second and 1 otherwise. */
int
nbrec_qos_index_compare(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_qos *const_data1,  const struct nbrec_qos *const_data2)
{
    struct nbrec_qos *data1 = CONST_CAST(struct nbrec_qos *, const_data1);
    struct nbrec_qos *data2 = CONST_CAST(struct nbrec_qos *, const_data2);
    return ovsdb_idl_index_compare(cursor, &data1->header_, &data2->header_);
}

/*  This function is called to position the cursor at the first row in "nbrec_qos" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The first row in the corresponding index. */
const struct nbrec_qos *
nbrec_qos_index_first(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_qos_cast(ovsdb_idl_index_first(cursor));
}

/*  This function is called to position the cursor at the next row in "nbrec_qos" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The next row in the corresponding index. */
const struct nbrec_qos *
nbrec_qos_index_next(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_qos_cast(ovsdb_idl_index_next(cursor));
}

/*  This function is used to find the data of the row in "nbrec_qos" table that meet criteria with the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_qos *const_data. Data to be searched.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_qos *
nbrec_qos_index_find(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_qos *const_data)
{
    struct nbrec_qos *data = CONST_CAST(struct nbrec_qos *, const_data);
    return nbrec_qos_cast(ovsdb_idl_index_find(cursor, &data->header_));
}

/*  This function is used to set the cursor pointing to the row in "nbrec_qos" table that meet criteria of the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_qos *const_data. Data to be searched.
    Return value: The row in the corresponding index closest to the criteria. */
const struct nbrec_qos *
nbrec_qos_index_forward_to(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_qos *const_data)
{
    struct nbrec_qos *data = CONST_CAST(struct nbrec_qos *, const_data);
    return nbrec_qos_cast(ovsdb_idl_index_forward_to(cursor, &data->header_));
}

/*  This function is used to get the data of the row in the current position pointed by the cursor in
    "nbrec_qos" table.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_qos *
nbrec_qos_index_get_data(const struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_qos_cast(ovsdb_idl_index_data(CONST_CAST(struct ovsdb_idl_index_cursor *, cursor)));
}

/* Sets the "action" column from the "QoS" table in 'row' to
 * the map with key 'key_action' and value 'value_action'
 *.
 *
 * Argument constraints: key must be "dscp", value in range 0 to 63
 *
 * The caller retains ownership of the arguments. */
void
nbrec_qos_index_set_action(const struct nbrec_qos *row, const char *key_action, int64_t value_action)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));
    union ovsdb_atom *value = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, key_action);
    datum.values = value;
    value->integer = value_action;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_qos_columns[ NBREC_QOS_COL_ACTION ], &datum, &nbrec_table_classes[NBREC_TABLE_QOS]);
}

/* Sets the "direction" column from the "QoS" table in 'row' to
 * 'direction'.
 *
 * Argument constraints: either "from-lport" or "to-lport"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_qos_index_set_direction(const struct nbrec_qos *row, const char *direction)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, direction);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_qos_columns[ NBREC_QOS_COL_DIRECTION ], &datum, &nbrec_table_classes[NBREC_TABLE_QOS]);
}

/* Sets the "external_ids" column's value from the "QoS" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_qos_index_set_external_ids(const struct nbrec_qos *row, const struct smap *external_ids)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(external_ids);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_qos_columns[NBREC_QOS_COL_EXTERNAL_IDS],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_QOS]);
}


/* Sets the "match" column from the "QoS" table in 'row' to
 * 'match'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_qos_index_set_match(const struct nbrec_qos *row, const char *match)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, match);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_qos_columns[ NBREC_QOS_COL_MATCH ], &datum, &nbrec_table_classes[NBREC_TABLE_QOS]);
}

/* Sets the "priority" column from the "QoS" table in 'row' to
 * 'priority'.
 *
 * Argument constraints: in range 0 to 32,767
 *
 * The caller retains ownership of the arguments. */
void
nbrec_qos_index_set_priority(const struct nbrec_qos *row, int64_t priority)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->integer = priority;
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_qos_columns[ NBREC_QOS_COL_PRIORITY ], &datum, &nbrec_table_classes[NBREC_TABLE_QOS]);
}

struct ovsdb_idl_column nbrec_qos_columns[NBREC_QOS_N_COLUMNS];

void
nbrec_qos_set_condition(struct ovsdb_idl *idl, struct ovsdb_idl_condition *condition)
{
    ovsdb_idl_set_condition(idl, &nbrec_table_qos, condition);
}
static union ovsdb_atom QoS_col_action_key_enum_keys[1] = {
    { .string = "dscp" },
};
static struct ovsdb_datum QoS_col_action_key_enum = {
    .n = 1,
    .keys = QoS_col_action_key_enum_keys,
};
static union ovsdb_atom QoS_col_direction_key_enum_keys[2] = {
    { .string = "from-lport" },
    { .string = "to-lport" },
};
static struct ovsdb_datum QoS_col_direction_key_enum = {
    .n = 2,
    .keys = QoS_col_direction_key_enum_keys,
};

struct ovsdb_idl_column nbrec_qos_columns[NBREC_QOS_N_COLUMNS] = {
    [NBREC_QOS_COL_ACTION] = {
         .name = "action",
         .type = {
            .key = {
               .type = OVSDB_TYPE_STRING,
               .enum_ = &QoS_col_action_key_enum,
               .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .value = {
                .type = OVSDB_TYPE_INTEGER,
                .u.integer = { .min = INT64_C(0), .max = INT64_C(63) },
            },
            .n_min = 1,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_qos_parse_action,
         .unparse = nbrec_qos_unparse_action,
    },

    [NBREC_QOS_COL_DIRECTION] = {
         .name = "direction",
         .type = {
            .key = {
               .type = OVSDB_TYPE_STRING,
               .enum_ = &QoS_col_direction_key_enum,
               .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 1,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_qos_parse_direction,
         .unparse = nbrec_qos_unparse_direction,
    },

    [NBREC_QOS_COL_EXTERNAL_IDS] = {
         .name = "external_ids",
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
         .parse = nbrec_qos_parse_external_ids,
         .unparse = nbrec_qos_unparse_external_ids,
    },

    [NBREC_QOS_COL_MATCH] = {
         .name = "match",
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
         .parse = nbrec_qos_parse_match,
         .unparse = nbrec_qos_unparse_match,
    },

    [NBREC_QOS_COL_PRIORITY] = {
         .name = "priority",
         .type = {
            .key = {
               .type = OVSDB_TYPE_INTEGER,
               .u.integer = { .min = INT64_C(0), .max = INT64_C(32767) },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 1,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_qos_parse_priority,
         .unparse = nbrec_qos_unparse_priority,
    },

};

/* SSL table. */

static void
nbrec_ssl_parse_bootstrap_ca_cert(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_ssl *row = nbrec_ssl_cast(row_);

    if (datum->n >= 1) {
        row->bootstrap_ca_cert = datum->keys[0].boolean;
    } else {
        row->bootstrap_ca_cert = false;
    }
}

static void
nbrec_ssl_parse_ca_cert(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_ssl *row = nbrec_ssl_cast(row_);

    if (datum->n >= 1) {
        row->ca_cert = datum->keys[0].string;
    } else {
        row->ca_cert = "";
    }
}

static void
nbrec_ssl_parse_certificate(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_ssl *row = nbrec_ssl_cast(row_);

    if (datum->n >= 1) {
        row->certificate = datum->keys[0].string;
    } else {
        row->certificate = "";
    }
}

static void
nbrec_ssl_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_ssl *row = nbrec_ssl_cast(row_);
    smap_init(&row->external_ids);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_ssl_parse_private_key(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_ssl *row = nbrec_ssl_cast(row_);

    if (datum->n >= 1) {
        row->private_key = datum->keys[0].string;
    } else {
        row->private_key = "";
    }
}

static void
nbrec_ssl_parse_ssl_ciphers(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_ssl *row = nbrec_ssl_cast(row_);

    if (datum->n >= 1) {
        row->ssl_ciphers = datum->keys[0].string;
    } else {
        row->ssl_ciphers = "";
    }
}

static void
nbrec_ssl_parse_ssl_protocols(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_ssl *row = nbrec_ssl_cast(row_);

    if (datum->n >= 1) {
        row->ssl_protocols = datum->keys[0].string;
    } else {
        row->ssl_protocols = "";
    }
}

static void
nbrec_ssl_unparse_bootstrap_ca_cert(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_ssl_unparse_ca_cert(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_ssl_unparse_certificate(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_ssl_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_ssl *row = nbrec_ssl_cast(row_);
    smap_destroy(&row->external_ids);
}

static void
nbrec_ssl_unparse_private_key(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_ssl_unparse_ssl_ciphers(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_ssl_unparse_ssl_protocols(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_ssl_init__(struct ovsdb_idl_row *row)
{
    nbrec_ssl_init(nbrec_ssl_cast(row));
}

/* Clears the contents of 'row' in table "SSL". */
void
nbrec_ssl_init(struct nbrec_ssl *row)
{
    memset(row, 0, sizeof *row); 
    row->ca_cert = "";
    row->certificate = "";
    smap_init(&row->external_ids);
    row->private_key = "";
    row->ssl_ciphers = "";
    row->ssl_protocols = "";
}

/* Searches table "SSL" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_ssl *
nbrec_ssl_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_ssl_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_ssl, uuid));
}

/* Returns a row in table "SSL" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_ssl *
nbrec_ssl_first(const struct ovsdb_idl *idl)
{
    return nbrec_ssl_cast(ovsdb_idl_first_row(idl, &nbrec_table_ssl));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_ssl *
nbrec_ssl_next(const struct nbrec_ssl *row)
{
    return nbrec_ssl_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_ssl_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_ssl);
}

unsigned int nbrec_ssl_row_get_seqno(const struct nbrec_ssl *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_ssl *
nbrec_ssl_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_ssl_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_ssl));
}

const struct nbrec_ssl
*nbrec_ssl_track_get_next(const struct nbrec_ssl *row)
{
    return nbrec_ssl_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "SSL".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_ssl_delete(const struct nbrec_ssl *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "SSL" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_ssl *
nbrec_ssl_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_ssl_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_ssl, NULL));
}

bool
nbrec_ssl_is_updated(const struct nbrec_ssl *row, enum nbrec_ssl_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_ssl_columns[column]);
}

/* Causes the original contents of column "bootstrap_ca_cert" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "bootstrap_ca_cert" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "bootstrap_ca_cert" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "bootstrap_ca_cert" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_ssl_insert()).
 *
 *   - If "bootstrap_ca_cert" has already been modified (with
 *     nbrec_ssl_set_bootstrap_ca_cert()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_ssl_set_bootstrap_ca_cert() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_ssl_verify_bootstrap_ca_cert(const struct nbrec_ssl *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_ssl_col_bootstrap_ca_cert);
}

/* Causes the original contents of column "ca_cert" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ca_cert" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ca_cert" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ca_cert" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_ssl_insert()).
 *
 *   - If "ca_cert" has already been modified (with
 *     nbrec_ssl_set_ca_cert()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_ssl_set_ca_cert() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_ssl_verify_ca_cert(const struct nbrec_ssl *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_ssl_col_ca_cert);
}

/* Causes the original contents of column "certificate" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "certificate" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "certificate" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "certificate" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_ssl_insert()).
 *
 *   - If "certificate" has already been modified (with
 *     nbrec_ssl_set_certificate()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_ssl_set_certificate() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_ssl_verify_certificate(const struct nbrec_ssl *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_ssl_col_certificate);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_ssl_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_ssl_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_ssl_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_ssl_verify_external_ids(const struct nbrec_ssl *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_ssl_col_external_ids);
}

/* Causes the original contents of column "private_key" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "private_key" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "private_key" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "private_key" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_ssl_insert()).
 *
 *   - If "private_key" has already been modified (with
 *     nbrec_ssl_set_private_key()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_ssl_set_private_key() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_ssl_verify_private_key(const struct nbrec_ssl *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_ssl_col_private_key);
}

/* Causes the original contents of column "ssl_ciphers" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ssl_ciphers" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ssl_ciphers" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ssl_ciphers" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_ssl_insert()).
 *
 *   - If "ssl_ciphers" has already been modified (with
 *     nbrec_ssl_set_ssl_ciphers()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_ssl_set_ssl_ciphers() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_ssl_verify_ssl_ciphers(const struct nbrec_ssl *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_ssl_col_ssl_ciphers);
}

/* Causes the original contents of column "ssl_protocols" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ssl_protocols" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ssl_protocols" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ssl_protocols" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_ssl_insert()).
 *
 *   - If "ssl_protocols" has already been modified (with
 *     nbrec_ssl_set_ssl_protocols()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_ssl_set_ssl_protocols() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_ssl_verify_ssl_protocols(const struct nbrec_ssl *row)
{
    ovsdb_idl_txn_verify(&row->header_, &nbrec_ssl_col_ssl_protocols);
}

/* Returns the "bootstrap_ca_cert" column's value from the "SSL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes bootstrap_ca_cert's
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
 * directly through the "bootstrap_ca_cert" member in nbrec_ssl. */
const struct ovsdb_datum *
nbrec_ssl_get_bootstrap_ca_cert(const struct nbrec_ssl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &nbrec_ssl_col_bootstrap_ca_cert);
}

/* Returns the "ca_cert" column's value from the "SSL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes ca_cert's
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
 * directly through the "ca_cert" member in nbrec_ssl. */
const struct ovsdb_datum *
nbrec_ssl_get_ca_cert(const struct nbrec_ssl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_ssl_col_ca_cert);
}

/* Returns the "certificate" column's value from the "SSL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes certificate's
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
 * directly through the "certificate" member in nbrec_ssl. */
const struct ovsdb_datum *
nbrec_ssl_get_certificate(const struct nbrec_ssl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_ssl_col_certificate);
}

/* Returns the "external_ids" column's value from the "SSL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
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
 * directly through the "external_ids" member in nbrec_ssl. */
const struct ovsdb_datum *
nbrec_ssl_get_external_ids(const struct nbrec_ssl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_ssl_col_external_ids);
}

/* Returns the "private_key" column's value from the "SSL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes private_key's
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
 * directly through the "private_key" member in nbrec_ssl. */
const struct ovsdb_datum *
nbrec_ssl_get_private_key(const struct nbrec_ssl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_ssl_col_private_key);
}

/* Returns the "ssl_ciphers" column's value from the "SSL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes ssl_ciphers's
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
 * directly through the "ssl_ciphers" member in nbrec_ssl. */
const struct ovsdb_datum *
nbrec_ssl_get_ssl_ciphers(const struct nbrec_ssl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_ssl_col_ssl_ciphers);
}

/* Returns the "ssl_protocols" column's value from the "SSL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes ssl_protocols's
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
 * directly through the "ssl_protocols" member in nbrec_ssl. */
const struct ovsdb_datum *
nbrec_ssl_get_ssl_protocols(const struct nbrec_ssl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_ssl_col_ssl_protocols);
}

/* Sets the "bootstrap_ca_cert" column from the "SSL" table in 'row' to
 * 'bootstrap_ca_cert'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_ssl_set_bootstrap_ca_cert(const struct nbrec_ssl *row, bool bootstrap_ca_cert)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.boolean = bootstrap_ca_cert;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_ssl_col_bootstrap_ca_cert, &datum);
}

/* Sets the "ca_cert" column from the "SSL" table in 'row' to
 * 'ca_cert'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_ssl_set_ca_cert(const struct nbrec_ssl *row, const char *ca_cert)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, ca_cert);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_ssl_col_ca_cert, &datum);
}

/* Sets the "certificate" column from the "SSL" table in 'row' to
 * 'certificate'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_ssl_set_certificate(const struct nbrec_ssl *row, const char *certificate)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, certificate);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_ssl_col_certificate, &datum);
}

/* Sets the "external_ids" column's value from the "SSL" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_ssl_set_external_ids(const struct nbrec_ssl *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_ssl_col_external_ids,
                        &datum);
}


/* Sets the "private_key" column from the "SSL" table in 'row' to
 * 'private_key'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_ssl_set_private_key(const struct nbrec_ssl *row, const char *private_key)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, private_key);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_ssl_col_private_key, &datum);
}

/* Sets the "ssl_ciphers" column from the "SSL" table in 'row' to
 * 'ssl_ciphers'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_ssl_set_ssl_ciphers(const struct nbrec_ssl *row, const char *ssl_ciphers)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, ssl_ciphers);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_ssl_col_ssl_ciphers, &datum);
}

/* Sets the "ssl_protocols" column from the "SSL" table in 'row' to
 * 'ssl_protocols'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_ssl_set_ssl_protocols(const struct nbrec_ssl *row, const char *ssl_protocols)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, ssl_protocols);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_ssl_col_ssl_protocols, &datum);
}

/* Sets an element of the "external_ids" map column from the "SSL" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_ssl_update_external_ids_setkey(const struct nbrec_ssl *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_ssl_col_external_ids,
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "SSL" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_ssl_update_external_ids_delkey(const struct nbrec_ssl *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_ssl_col_external_ids,
                                    datum);
}

/* Sets the "bootstrap_ca_cert" column from the "SSL" table in 'row' to
 * 'bootstrap_ca_cert'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_ssl_add_clause_bootstrap_ca_cert(struct ovsdb_idl_condition *cond, enum ovsdb_function function, bool bootstrap_ca_cert)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.boolean = bootstrap_ca_cert;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_ssl_col_bootstrap_ca_cert,
                          &datum);
}

/* Sets the "ca_cert" column from the "SSL" table in 'row' to
 * 'ca_cert'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_ssl_add_clause_ca_cert(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *ca_cert)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, ca_cert);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_ssl_col_ca_cert,
                          &datum);
}

/* Sets the "certificate" column from the "SSL" table in 'row' to
 * 'certificate'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_ssl_add_clause_certificate(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *certificate)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, certificate);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_ssl_col_certificate,
                          &datum);
}

/* Sets the "external_ids" column's value from the "SSL" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_ssl_add_clause_external_ids(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    if (external_ids) {
        ovsdb_datum_from_smap(&datum, external_ids);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &nbrec_ssl_col_external_ids,
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_ssl_col_external_ids.type);
}


/* Sets the "private_key" column from the "SSL" table in 'row' to
 * 'private_key'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_ssl_add_clause_private_key(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *private_key)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, private_key);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_ssl_col_private_key,
                          &datum);
}

/* Sets the "ssl_ciphers" column from the "SSL" table in 'row' to
 * 'ssl_ciphers'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_ssl_add_clause_ssl_ciphers(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *ssl_ciphers)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, ssl_ciphers);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_ssl_col_ssl_ciphers,
                          &datum);
}

/* Sets the "ssl_protocols" column from the "SSL" table in 'row' to
 * 'ssl_protocols'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_ssl_add_clause_ssl_protocols(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *ssl_protocols)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, ssl_protocols);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &nbrec_ssl_col_ssl_protocols,
                          &datum);
}

/* Destroy 'row' of kind "SSL". The row must have been
 * created with ovsdb_idl_index_init_row.
 */
void
nbrec_ssl_index_destroy_row(const struct nbrec_ssl *row)
{
    ovsdb_idl_index_destroy_row__(&row->header_);
}
        

/* Creates a new row of kind "SSL". */
struct nbrec_ssl *
nbrec_ssl_index_init_row(struct ovsdb_idl *idl, const struct ovsdb_idl_table_class *class)
{
    return (struct nbrec_ssl *) ovsdb_idl_index_init_row(idl, class);
}

/*  This function is used to compare "nbrec_ssl" records on table in iteration loops for compound-index operations.
    After been called, cursor point to current position in the index
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct "nbrec_ssl" *const_data1,  const struct "nbrec_ssl" *const_data2. Data to be compared.
    Return value: 0 if both data values are equal, -1 if first parameter is less than second and 1 otherwise. */
int
nbrec_ssl_index_compare(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_ssl *const_data1,  const struct nbrec_ssl *const_data2)
{
    struct nbrec_ssl *data1 = CONST_CAST(struct nbrec_ssl *, const_data1);
    struct nbrec_ssl *data2 = CONST_CAST(struct nbrec_ssl *, const_data2);
    return ovsdb_idl_index_compare(cursor, &data1->header_, &data2->header_);
}

/*  This function is called to position the cursor at the first row in "nbrec_ssl" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The first row in the corresponding index. */
const struct nbrec_ssl *
nbrec_ssl_index_first(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_ssl_cast(ovsdb_idl_index_first(cursor));
}

/*  This function is called to position the cursor at the next row in "nbrec_ssl" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The next row in the corresponding index. */
const struct nbrec_ssl *
nbrec_ssl_index_next(struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_ssl_cast(ovsdb_idl_index_next(cursor));
}

/*  This function is used to find the data of the row in "nbrec_ssl" table that meet criteria with the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_ssl *const_data. Data to be searched.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_ssl *
nbrec_ssl_index_find(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_ssl *const_data)
{
    struct nbrec_ssl *data = CONST_CAST(struct nbrec_ssl *, const_data);
    return nbrec_ssl_cast(ovsdb_idl_index_find(cursor, &data->header_));
}

/*  This function is used to set the cursor pointing to the row in "nbrec_ssl" table that meet criteria of the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct nbrec_ssl *const_data. Data to be searched.
    Return value: The row in the corresponding index closest to the criteria. */
const struct nbrec_ssl *
nbrec_ssl_index_forward_to(struct ovsdb_idl_index_cursor *cursor, const struct nbrec_ssl *const_data)
{
    struct nbrec_ssl *data = CONST_CAST(struct nbrec_ssl *, const_data);
    return nbrec_ssl_cast(ovsdb_idl_index_forward_to(cursor, &data->header_));
}

/*  This function is used to get the data of the row in the current position pointed by the cursor in
    "nbrec_ssl" table.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct nbrec_ssl *
nbrec_ssl_index_get_data(const struct ovsdb_idl_index_cursor *cursor)
{
    return nbrec_ssl_cast(ovsdb_idl_index_data(CONST_CAST(struct ovsdb_idl_index_cursor *, cursor)));
}

/* Sets the "bootstrap_ca_cert" column from the "SSL" table in 'row' to
 * 'bootstrap_ca_cert'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_ssl_index_set_bootstrap_ca_cert(const struct nbrec_ssl *row, bool bootstrap_ca_cert)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->boolean = bootstrap_ca_cert;
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_ssl_columns[ NBREC_SSL_COL_BOOTSTRAP_CA_CERT ], &datum, &nbrec_table_classes[NBREC_TABLE_SSL]);
}

/* Sets the "ca_cert" column from the "SSL" table in 'row' to
 * 'ca_cert'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_ssl_index_set_ca_cert(const struct nbrec_ssl *row, const char *ca_cert)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, ca_cert);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_ssl_columns[ NBREC_SSL_COL_CA_CERT ], &datum, &nbrec_table_classes[NBREC_TABLE_SSL]);
}

/* Sets the "certificate" column from the "SSL" table in 'row' to
 * 'certificate'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_ssl_index_set_certificate(const struct nbrec_ssl *row, const char *certificate)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, certificate);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_ssl_columns[ NBREC_SSL_COL_CERTIFICATE ], &datum, &nbrec_table_classes[NBREC_TABLE_SSL]);
}

/* Sets the "external_ids" column's value from the "SSL" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_ssl_index_set_external_ids(const struct nbrec_ssl *row, const struct smap *external_ids)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(external_ids);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &nbrec_ssl_columns[NBREC_SSL_COL_EXTERNAL_IDS],
                           datum,
                           &nbrec_table_classes[NBREC_TABLE_SSL]);
}


/* Sets the "private_key" column from the "SSL" table in 'row' to
 * 'private_key'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_ssl_index_set_private_key(const struct nbrec_ssl *row, const char *private_key)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, private_key);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_ssl_columns[ NBREC_SSL_COL_PRIVATE_KEY ], &datum, &nbrec_table_classes[NBREC_TABLE_SSL]);
}

/* Sets the "ssl_ciphers" column from the "SSL" table in 'row' to
 * 'ssl_ciphers'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_ssl_index_set_ssl_ciphers(const struct nbrec_ssl *row, const char *ssl_ciphers)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, ssl_ciphers);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_ssl_columns[ NBREC_SSL_COL_SSL_CIPHERS ], &datum, &nbrec_table_classes[NBREC_TABLE_SSL]);
}

/* Sets the "ssl_protocols" column from the "SSL" table in 'row' to
 * 'ssl_protocols'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_ssl_index_set_ssl_protocols(const struct nbrec_ssl *row, const char *ssl_protocols)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, ssl_protocols);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &nbrec_ssl_columns[ NBREC_SSL_COL_SSL_PROTOCOLS ], &datum, &nbrec_table_classes[NBREC_TABLE_SSL]);
}

struct ovsdb_idl_column nbrec_ssl_columns[NBREC_SSL_N_COLUMNS];

void
nbrec_ssl_set_condition(struct ovsdb_idl *idl, struct ovsdb_idl_condition *condition)
{
    ovsdb_idl_set_condition(idl, &nbrec_table_ssl, condition);
}

struct ovsdb_idl_column nbrec_ssl_columns[NBREC_SSL_N_COLUMNS] = {
    [NBREC_SSL_COL_BOOTSTRAP_CA_CERT] = {
         .name = "bootstrap_ca_cert",
         .type = {
            .key = {
               .type = OVSDB_TYPE_BOOLEAN,
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 1,
            .n_max = 1,
         },
         .mutable = true,
         .parse = nbrec_ssl_parse_bootstrap_ca_cert,
         .unparse = nbrec_ssl_unparse_bootstrap_ca_cert,
    },

    [NBREC_SSL_COL_CA_CERT] = {
         .name = "ca_cert",
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
         .parse = nbrec_ssl_parse_ca_cert,
         .unparse = nbrec_ssl_unparse_ca_cert,
    },

    [NBREC_SSL_COL_CERTIFICATE] = {
         .name = "certificate",
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
         .parse = nbrec_ssl_parse_certificate,
         .unparse = nbrec_ssl_unparse_certificate,
    },

    [NBREC_SSL_COL_EXTERNAL_IDS] = {
         .name = "external_ids",
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
         .parse = nbrec_ssl_parse_external_ids,
         .unparse = nbrec_ssl_unparse_external_ids,
    },

    [NBREC_SSL_COL_PRIVATE_KEY] = {
         .name = "private_key",
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
         .parse = nbrec_ssl_parse_private_key,
         .unparse = nbrec_ssl_unparse_private_key,
    },

    [NBREC_SSL_COL_SSL_CIPHERS] = {
         .name = "ssl_ciphers",
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
         .parse = nbrec_ssl_parse_ssl_ciphers,
         .unparse = nbrec_ssl_unparse_ssl_ciphers,
    },

    [NBREC_SSL_COL_SSL_PROTOCOLS] = {
         .name = "ssl_protocols",
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
         .parse = nbrec_ssl_parse_ssl_protocols,
         .unparse = nbrec_ssl_unparse_ssl_protocols,
    },

};

struct ovsdb_idl_table_class nbrec_table_classes[NBREC_N_TABLES] = {
    {"ACL", false,
     nbrec_acl_columns, ARRAY_SIZE(nbrec_acl_columns),
     sizeof(struct nbrec_acl), nbrec_acl_init__},
    {"Address_Set", true,
     nbrec_address_set_columns, ARRAY_SIZE(nbrec_address_set_columns),
     sizeof(struct nbrec_address_set), nbrec_address_set_init__},
    {"Connection", false,
     nbrec_connection_columns, ARRAY_SIZE(nbrec_connection_columns),
     sizeof(struct nbrec_connection), nbrec_connection_init__},
    {"DHCP_Options", true,
     nbrec_dhcp_options_columns, ARRAY_SIZE(nbrec_dhcp_options_columns),
     sizeof(struct nbrec_dhcp_options), nbrec_dhcp_options_init__},
    {"DNS", true,
     nbrec_dns_columns, ARRAY_SIZE(nbrec_dns_columns),
     sizeof(struct nbrec_dns), nbrec_dns_init__},
    {"Gateway_Chassis", false,
     nbrec_gateway_chassis_columns, ARRAY_SIZE(nbrec_gateway_chassis_columns),
     sizeof(struct nbrec_gateway_chassis), nbrec_gateway_chassis_init__},
    {"Load_Balancer", true,
     nbrec_load_balancer_columns, ARRAY_SIZE(nbrec_load_balancer_columns),
     sizeof(struct nbrec_load_balancer), nbrec_load_balancer_init__},
    {"Logical_Router", true,
     nbrec_logical_router_columns, ARRAY_SIZE(nbrec_logical_router_columns),
     sizeof(struct nbrec_logical_router), nbrec_logical_router_init__},
    {"Logical_Router_Port", false,
     nbrec_logical_router_port_columns, ARRAY_SIZE(nbrec_logical_router_port_columns),
     sizeof(struct nbrec_logical_router_port), nbrec_logical_router_port_init__},
    {"Logical_Router_Static_Route", false,
     nbrec_logical_router_static_route_columns, ARRAY_SIZE(nbrec_logical_router_static_route_columns),
     sizeof(struct nbrec_logical_router_static_route), nbrec_logical_router_static_route_init__},
    {"Logical_Switch", true,
     nbrec_logical_switch_columns, ARRAY_SIZE(nbrec_logical_switch_columns),
     sizeof(struct nbrec_logical_switch), nbrec_logical_switch_init__},
    {"Logical_Switch_Port", false,
     nbrec_logical_switch_port_columns, ARRAY_SIZE(nbrec_logical_switch_port_columns),
     sizeof(struct nbrec_logical_switch_port), nbrec_logical_switch_port_init__},
    {"NAT", false,
     nbrec_nat_columns, ARRAY_SIZE(nbrec_nat_columns),
     sizeof(struct nbrec_nat), nbrec_nat_init__},
    {"NB_Global", true,
     nbrec_nb_global_columns, ARRAY_SIZE(nbrec_nb_global_columns),
     sizeof(struct nbrec_nb_global), nbrec_nb_global_init__},
    {"QoS", false,
     nbrec_qos_columns, ARRAY_SIZE(nbrec_qos_columns),
     sizeof(struct nbrec_qos), nbrec_qos_init__},
    {"SSL", false,
     nbrec_ssl_columns, ARRAY_SIZE(nbrec_ssl_columns),
     sizeof(struct nbrec_ssl), nbrec_ssl_init__},
};

struct ovsdb_idl_class nbrec_idl_class = {
    "OVN_Northbound", nbrec_table_classes, ARRAY_SIZE(nbrec_table_classes)
};

/* Return the schema version.  The caller must not free the returned value. */
const char *
nbrec_get_db_version(void)
{
    return "5.8.0";
}

