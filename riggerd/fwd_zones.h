#include "config.h"
#include "connection_list.h"

#if !defined FWD_ZONES_H && defined FWD_ZONES_SUPPORT
#define FWD_ZONES_H

/**
 * Read input in json format and parse it
 * into list of connections. In case of failure
 * return empty list.
 */
struct nm_connection_list yield_connections_from_json(char *json);

#endif /* FWD_ZONES_H */