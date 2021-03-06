#include <net-snmp/net-snmp-config.h>

#if HAVE_STDLIB_H
#include <stdlib.h>
#endif
#if HAVE_UNISTD_H
#include <unistd.h>
#endif
#include <stdio.h>
#if HAVE_STRING_H
#include <string.h>
#else
#include <strings.h>
#endif
#include <ctype.h>
#include <sys/types.h>
#if HAVE_WINSOCK_H
#include <winsock.h>
#else
#include <netinet/in.h>
#include <netdb.h>
#endif
#if HAVE_SYS_WAIT_H
#include <sys/wait.h>
#endif

#include <net-snmp/config_api.h>
#include <net-snmp/output_api.h>
#include <net-snmp/mib_api.h>
#include <net-snmp/utilities.h>

#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>
#include "utilities/execute.h"
#include "snmptrapd_handlers.h"
#include "snmptrapd_auth.h"
#include "snmptrapd_log.h"
#include "notification-log-mib/notification_log.h"

char *syslog_format1 = NULL;
char *syslog_format2 = NULL;
char *print_format1  = NULL;
char *print_format2  = NULL;

const char     *trap1_std_str = "%.4y-%.2m-%.2l %.2h:%.2j:%.2k %B [%b] (via %A [%a]): %N\n\t%W Trap (%q) Uptime: %#T\n%v\n";
const char     *trap2_std_str = "%.4y-%.2m-%.2l %.2h:%.2j:%.2k %B [%b]:\n%v\n";

void snmptrapd_free_traphandle(void);

const char *
trap_description(int trap)
{
    switch (trap) {
    case SNMP_TRAP_COLDSTART:
        return "Cold Start";
    case SNMP_TRAP_WARMSTART:
        return "Warm Start";
    case SNMP_TRAP_LINKDOWN:
        return "Link Down";
    case SNMP_TRAP_LINKUP:
        return "Link Up";
    case SNMP_TRAP_AUTHFAIL:
        return "Authentication Failure";
    case SNMP_TRAP_EGPNEIGHBORLOSS:
        return "EGP Neighbor Loss";
    case SNMP_TRAP_ENTERPRISESPECIFIC:
        return "Enterprise Specific";
    default:
        return "Unknown Type";
    }
}



void
snmptrapd_parse_traphandle(const char *token, char *line)
{
    char            buf[STRINGMAX];
    oid             obuf[MAX_OID_LEN];
    size_t          olen = MAX_OID_LEN;
    char           *cptr, *cp;
    netsnmp_trapd_handler *traph;
    int             flags = 0;

    memset( buf, 0, sizeof(buf));
    memset(obuf, 0, sizeof(obuf));
    cptr = copy_nword(line, buf, sizeof(buf));
    if ( !cptr ) {
        config_perror("Missing traphandle command");
        return;
    }

    DEBUGMSGTL(("read_config:traphandle", "registering handler for: "));
    if (!strcmp(buf, "default")) {
        DEBUGMSG(("read_config:traphandle", "default"));
        traph = netsnmp_add_default_traphandler( command_handler );
    } else {
        cp = buf+strlen(buf)-1;
        if ( *cp == '*' ) {
            flags |= NETSNMP_TRAPHANDLER_FLAG_MATCH_TREE;
            *(cp--) = '\0';
            if ( *cp == '.' ) {
                /* 
                 * Distinguish between 'oid.*' & 'oid*'
                 */
                flags |= NETSNMP_TRAPHANDLER_FLAG_STRICT_SUBTREE;
                *(cp--) = '\0';
            }
        }
        if (!read_objid(buf, obuf, &olen)) {
            char            buf1[STRINGMAX];
            snprintf(buf1,  sizeof(buf1),
                    "Bad trap OID in traphandle directive: %s", buf);
            buf1[ sizeof(buf1)-1 ] = 0;
            config_perror(buf1);
            return;
        }
        DEBUGMSGOID(("read_config:traphandle", obuf, olen));
        traph = netsnmp_add_traphandler( command_handler, obuf, olen );
    }

    DEBUGMSG(("read_config:traphandle", "\n"));

    if (traph) {
        traph->flags = flags;
        traph->authtypes = TRAP_AUTH_EXE;
        traph->token = strdup(cptr);
    }
}


static void
parse_forward(const char *token, char *line)
{
    char            buf[STRINGMAX];
    oid             obuf[MAX_OID_LEN];
    size_t          olen = MAX_OID_LEN;
    char           *cptr, *cp;
    netsnmp_trapd_handler *traph;
    int             flags = 0;

    memset( buf, 0, sizeof(buf));
    memset(obuf, 0, sizeof(obuf));
    cptr = copy_nword(line, buf, sizeof(buf));
    DEBUGMSGTL(("read_config:forward", "registering forward for: "));
    if (!strcmp(buf, "default")) {
        DEBUGMSG(("read_config:forward", "default"));
        if ( !strcmp( cptr, "agentx" ))
            traph = netsnmp_add_default_traphandler( axforward_handler );
        else
            traph = netsnmp_add_default_traphandler( forward_handler );
    } else {
        cp = buf+strlen(buf)-1;
        if ( *cp == '*' ) {
            flags |= NETSNMP_TRAPHANDLER_FLAG_MATCH_TREE;
            *(cp--) = '\0';
            if ( *cp == '.' ) {
                /* 
                 * Distinguish between 'oid.*' & 'oid*'
                 */
                flags |= NETSNMP_TRAPHANDLER_FLAG_STRICT_SUBTREE;
                *(cp--) = '\0';
            }
        }

        if (!read_objid(buf, obuf, &olen)) {
            char            buf1[STRINGMAX];
            snprintf(buf1,  sizeof(buf1),
                    "Bad trap OID in forward directive: %s", buf);
            buf1[ sizeof(buf1)-1 ] = 0;
            config_perror(buf1);
            return;
        }
        DEBUGMSGOID(("read_config:forward", obuf, olen));
        if ( !strcmp( cptr, "agentx" ))
            traph = netsnmp_add_traphandler( axforward_handler, obuf, olen );
        else
            traph = netsnmp_add_traphandler( forward_handler, obuf, olen );
    }

    DEBUGMSG(("read_config:forward", "\n"));

    if (traph) {
        traph->flags = flags;
        traph->authtypes = TRAP_AUTH_NET;
        traph->token = strdup(cptr);
    }
}


static void
parse_format(const char *token, char *line)
{
    char *cp;

    /*
     * Extract the first token from the value
     * which tells us which style of format this is
     */
    cp = line;
    while (*cp && !isspace(*cp))
        cp++;
    if (!(*cp)) {
        /*
	 * If we haven't got anything left,
	 * then this entry is malformed.
	 * So report this, and give up
	 */
        return;
    }

    *(cp++) = '\0';
    while (*cp && !isspace(*cp))
        cp++;

    /*
     * OK - now "line" contains the format type,
     *      and cp points to the actual format string.
     * So update the appropriate pointer(s).
     */
    if (!strcmp( line, "print1")) {
        SNMP_FREE( print_format1 );
        print_format1 = strdup(cp);
    } else if (!strcmp( line, "print2")) {
        SNMP_FREE( print_format2 );
        print_format2 = strdup(cp);
    } else if (!strcmp( line, "print")) {
        SNMP_FREE( print_format1 );
        SNMP_FREE( print_format2 );
        print_format1 = strdup(cp);
        print_format2 = strdup(cp);
    } else if (!strcmp( line, "syslog1")) {
        SNMP_FREE( syslog_format1 );
        syslog_format1 = strdup(cp);
    } else if (!strcmp( line, "syslog2")) {
        SNMP_FREE( syslog_format2 );
        syslog_format2 = strdup(cp);
    } else if (!strcmp( line, "syslog")) {
        SNMP_FREE( syslog_format1 );
        SNMP_FREE( syslog_format2 );
        syslog_format1 = strdup(cp);
        syslog_format2 = strdup(cp);
    }
}


static void
parse_trap1_fmt(const char *token, char *line)
{
    print_format1 = strdup(line);
}


void
free_trap1_fmt(void)
{
    if (print_format1 && print_format1 != trap1_std_str)
        free((char *) print_format1);
    print_format1 = NULL;
}


static void
parse_trap2_fmt(const char *token, char *line)
{
    print_format2 = strdup(line);
}


void
free_trap2_fmt(void)
{
    if (print_format2 && print_format2 != trap2_std_str)
        free((char *) print_format2);
    print_format2 = NULL;
}


void
snmptrapd_register_configs( void )
{
    register_config_handler("snmptrapd", "traphandle",
                            snmptrapd_parse_traphandle,
                            snmptrapd_free_traphandle,
                            "oid|\"default\" program [args ...] ");
    register_config_handler("snmptrapd", "format1",
                            parse_trap1_fmt, free_trap1_fmt, "format");
    register_config_handler("snmptrapd", "format2",
                            parse_trap2_fmt, free_trap2_fmt, "format");
    register_config_handler("snmptrapd", "format",
                            parse_format, NULL,
			    "[print{,1,2}|syslog{,1,2}] format");
    register_config_handler("snmptrapd", "forward",
                            parse_forward, NULL, "OID|\"default\" destination");
}



/*-----------------------------
 *
 * Routines to implement a "registry" of trap handlers
 *
 *-----------------------------*/

netsnmp_trapd_handler *netsnmp_auth_global_traphandlers   = NULL;
netsnmp_trapd_handler *netsnmp_pre_global_traphandlers    = NULL;
netsnmp_trapd_handler *netsnmp_post_global_traphandlers   = NULL;
netsnmp_trapd_handler *netsnmp_default_traphandlers  = NULL;
netsnmp_trapd_handler *netsnmp_specific_traphandlers = NULL;

/*
 * Register a new "global" traphandler,
 * to be applied to *all* incoming traps
 */
netsnmp_trapd_handler *
netsnmp_add_global_traphandler(int list, Netsnmp_Trap_Handler* handler) {
    netsnmp_trapd_handler *traph;

    if ( !handler )
        return NULL;

    traph = SNMP_MALLOC_TYPEDEF(netsnmp_trapd_handler);
    if ( !traph )
        return NULL;

    /*
     * Add this new handler to the front of the appropriate global list
     *   (or should it go on the end?)
     */
    traph->handler = handler;
    traph->authtypes = TRAP_AUTH_ALL; /* callers will likely change this */
    switch (list) {
    case NETSNMPTRAPD_AUTH_HANDLER:
        traph->nexth   = netsnmp_auth_global_traphandlers;
        netsnmp_auth_global_traphandlers = traph;
        break;
    case NETSNMPTRAPD_PRE_HANDLER:
        traph->nexth   = netsnmp_pre_global_traphandlers;
        netsnmp_pre_global_traphandlers = traph;
        break;
    case NETSNMPTRAPD_POST_HANDLER:
        traph->nexth   = netsnmp_post_global_traphandlers;
        netsnmp_post_global_traphandlers = traph;
        break;
    default:
        free( traph );
        return NULL;
    }
    return traph;
}


/*
 * Register a new "default" traphandler, to be applied to all
 * traps with no specific trap handlers of their own.
 */
netsnmp_trapd_handler *
netsnmp_add_default_traphandler( Netsnmp_Trap_Handler* handler) {
    netsnmp_trapd_handler *traph;

    if ( !handler )
        return NULL;

    traph = SNMP_MALLOC_TYPEDEF(netsnmp_trapd_handler);
    if ( !traph )
        return NULL;

    /*
     * Add this new handler to the front of the default list
     *   (or should it go on the end?)
     */
    traph->authtypes = TRAP_AUTH_ALL; /* callers will likely change this */
    traph->handler = handler;
    traph->nexth   = netsnmp_default_traphandlers;
    netsnmp_default_traphandlers = traph;
    return traph;
}


/*
 * Register a new trap-specific traphandler
 */
netsnmp_trapd_handler *
netsnmp_add_traphandler(Netsnmp_Trap_Handler* handler,
                        oid *trapOid, int trapOidLen ) {
    netsnmp_trapd_handler *traph, *traph2;

    if ( !handler )
        return NULL;

    traph = SNMP_MALLOC_TYPEDEF(netsnmp_trapd_handler);
    if ( !traph )
        return NULL;

    /*
     * Populate this new handler with the trap information
     *   (NB: the OID fields were not used in the default/global lists)
     */
    traph->authtypes   = TRAP_AUTH_ALL; /* callers will likely change this */
    traph->handler     = handler;
    traph->trapoid_len = trapOidLen;
    memdup((u_char **)&(traph->trapoid), (u_char *)trapOid,
		    sizeof(oid) * trapOidLen);

    /*
     * Now try to find the appropriate place in the trap-specific
     * list for this particular trap OID.  If there's a matching OID
     * already, then find it.  Otherwise find the one that follows.
     * If we run out of entried, the new one should be tacked onto the end.
     */
    for (traph2 = netsnmp_specific_traphandlers;
         traph2; traph2 = traph2->nextt) {
	    		/* XXX - check this! */
        if (snmp_oid_compare(traph2->trapoid, traph2->trapoid_len,
                             trapOid, trapOidLen) <= 0)
	    break;
    }
    if (traph2) {
        /*
         * OK - We've either got an exact match, or we've found the
	 *   entry *after* where the new one should go.
         */
        if (!snmp_oid_compare(traph->trapoid,  traph->trapoid_len,
                              traph2->trapoid, traph2->trapoid_len)) {
            /*
             * Exact match, so find the end of the *handler* list
             *   and tack on this new entry...
             */
            while (traph2->nexth)
                traph2 = traph2->nexth;
            traph2->nexth = traph;
            traph->nextt  = traph2->nextt;   /* Might as well... */
            traph->prevt  = traph2->prevt;
        } else {
            /*
             * .. or the following entry, so insert the new one before it.
             */
            traph->prevt  = traph2->prevt;
            if (traph2->prevt)
	        traph2->prevt->nextt = traph;
            else
	        netsnmp_specific_traphandlers = traph;
            traph2->prevt = traph;
            traph->nextt  = traph2;
        }
    } else {
        /*
         * If we've run out of entries without finding a suitable spot,
	 *   the new one should be tacked onto the end.....
         */
	if (netsnmp_specific_traphandlers) {
            traph2 = netsnmp_specific_traphandlers;
            while (traph2->nextt)
                traph2 = traph2->nextt;
            traph2->nextt = traph;
            traph->prevt  = traph2;
	} else {
            /*
             * .... unless this is the very first entry, of course!
             */
            netsnmp_specific_traphandlers = traph;
        }
    }

    return traph;
}

void
snmptrapd_free_traphandle(void)
{
    netsnmp_trapd_handler *traph = NULL, *nextt = NULL, *nexth = NULL;

    DEBUGMSGTL(("snmptrapd", "Freeing trap handler lists\n"));

    /*
     * Free default trap handlers
     */
    traph = netsnmp_default_traphandlers;
   /* loop over handlers */
    while (traph) {
       DEBUGMSG(("snmptrapd", "Freeing default trap handler\n"));
	nexth = traph->nexth;
	SNMP_FREE(traph->token);
	SNMP_FREE(traph);
	traph = nexth;
    }
    netsnmp_default_traphandlers = NULL;

    /* 
     * Free specific trap handlers
     */
    traph = netsnmp_specific_traphandlers;
    /* loop over traps */
    while (traph) {
        nextt = traph->nextt;
        /* loop over handlers for this trap */
	while (traph) {
	    DEBUGMSG(("snmptrapd", "Freeing specific trap handler\n"));
	    nexth = traph->nexth;
	    SNMP_FREE(traph->token);
	    SNMP_FREE(traph->trapoid);
	    SNMP_FREE(traph);
	    traph = nexth;
	}
	traph = nextt;
    }
    netsnmp_specific_traphandlers = NULL;
}

/*
 * Locate the list of handlers for this particular Trap OID
 * Returns NULL if there are no relevant traps
 */
netsnmp_trapd_handler *
netsnmp_get_traphandler( oid *trapOid, int trapOidLen ) {
    netsnmp_trapd_handler *traph;
    
    if (!trapOid || !trapOidLen)
        return NULL;

    /*
     * Look for a matching OID, and return that list...
     */
    for (traph = netsnmp_specific_traphandlers;
         traph; traph=traph->nextt ) {

        /*
         * If the trap handler wasn't wildcarded, then the trapOID
         *   should match the registered OID exactly.
         */
        if (!(traph->flags & NETSNMP_TRAPHANDLER_FLAG_MATCH_TREE)) {
            if (snmp_oid_compare(traph->trapoid, traph->trapoid_len,
                                 trapOid, trapOidLen) == 0) {
                DEBUGMSGTL(( "snmptrapd", "get_traphandler exact match (%x)\n", traph));
	        return traph;
            }
	} else {
           /*
            * If the trap handler *was* wildcarded, then the trapOID
            *   should have the registered OID as a prefix...
            */
            if (snmp_oidsubtree_compare(traph->trapoid,
                                        traph->trapoid_len,
                                        trapOid, trapOidLen) == 0) {
                if (traph->flags & NETSNMP_TRAPHANDLER_FLAG_STRICT_SUBTREE) {
                    /*
                     * ... and (optionally) *strictly* as a prefix
                     *   i.e. not including an exact match.
                     */
                    if (snmp_oid_compare(traph->trapoid, traph->trapoid_len,
                                         trapOid, trapOidLen) != 0) {
                        DEBUGMSGTL(( "snmptrapd", "get_traphandler strict subtree match (%x)\n", traph));
	                return traph;
                    }
                } else {
                    DEBUGMSGTL(( "snmptrapd", "get_traphandler subtree match (%x)\n", traph));
	            return traph;
                }
            }
	}
    }

    /*
     * .... or failing that, return the "default" list (which may be NULL)
     */
    DEBUGMSGTL(( "snmptrapd", "get_traphandler default (%x)\n",
			    netsnmp_default_traphandlers));
    return netsnmp_default_traphandlers;
}

/*-----------------------------
 *
 * Standard traphandlers for the common requirements
 *
 *-----------------------------*/

#define SYSLOG_V1_STANDARD_FORMAT      "%a: %W Trap (%q) Uptime: %#T%#v\n"
#define SYSLOG_V1_ENTERPRISE_FORMAT    "%a: %W Trap (%q) Uptime: %#T%#v\n" /* XXX - (%q) become (.N) ??? */
#define SYSLOG_V23_NOTIFICATION_FORMAT "%B [%b]: Trap %#v\n"	 	   /* XXX - introduces a leading " ," */

/*
 *  Trap handler for logging via syslog
 */
int   syslog_handler(  netsnmp_pdu           *pdu,
                       netsnmp_transport     *transport,
                       netsnmp_trapd_handler *handler)
{
    u_char         *rbuf = NULL;
    size_t          r_len = 64, o_len = 0;
    int             trunc = 0;
    extern int      SyslogTrap;

    DEBUGMSGTL(( "snmptrapd", "syslog_handler\n"));

    if (SyslogTrap)
        return NETSNMPTRAPD_HANDLER_OK;

    if ((rbuf = (u_char *) calloc(r_len, 1)) == NULL) {
        snmp_log(LOG_ERR, "couldn't display trap -- malloc failed\n");
        return NETSNMPTRAPD_HANDLER_FAIL;	/* Failed but keep going */
    }

    /*
     *  If there's a format string registered for this trap, then use it.
     */
    if (handler && handler->format) {
        DEBUGMSGTL(( "snmptrapd", "format = '%s'\n", handler->format));
        if (*handler->format) {
            trunc = !realloc_format_trap(&rbuf, &r_len, &o_len, 1,
                                     handler->format, pdu, transport);
        } else {
            free(rbuf);
            return NETSNMPTRAPD_HANDLER_OK;    /* A 0-length format string means don't log */
        }

    /*
     *  Otherwise (i.e. a NULL handler format string),
     *      use a standard output format setting
     *      either configurable, or hardwired
     *
     *  XXX - v1 traps use a different hardwired formats for
     *        standard and enterprise specific traps
     *        Do we actually need this?
     */
    } else {
	if ( pdu->command == SNMP_MSG_TRAP ) {
            if (syslog_format1) {
                DEBUGMSGTL(( "snmptrapd", "syslog_format v1 = '%s'\n", syslog_format1));
                trunc = !realloc_format_trap(&rbuf, &r_len, &o_len, 1,
                                             syslog_format1, pdu, transport);

	    } else if (pdu->trap_type == SNMP_TRAP_ENTERPRISESPECIFIC) {
                DEBUGMSGTL(( "snmptrapd", "v1 enterprise format\n"));
                trunc = !realloc_format_trap(&rbuf, &r_len, &o_len, 1,
                                             SYSLOG_V1_ENTERPRISE_FORMAT,
                                             pdu, transport);
	    } else {
                DEBUGMSGTL(( "snmptrapd", "v1 standard trap format\n"));
                trunc = !realloc_format_trap(&rbuf, &r_len, &o_len, 1,
                                             SYSLOG_V1_STANDARD_FORMAT,
                                             pdu, transport);
	    }
	} else {	/* SNMPv2/3 notifications */
            if (syslog_format2) {
                DEBUGMSGTL(( "snmptrapd", "syslog_format v1 = '%s'\n", syslog_format2));
                trunc = !realloc_format_trap(&rbuf, &r_len, &o_len, 1,
                                             syslog_format2, pdu, transport);
	    } else {
                DEBUGMSGTL(( "snmptrapd", "v2/3 format\n"));
                trunc = !realloc_format_trap(&rbuf, &r_len, &o_len, 1,
                                             SYSLOG_V23_NOTIFICATION_FORMAT,
                                             pdu, transport);
	    }
        }
    }
    snmp_log(LOG_WARNING, "%s%s", rbuf, (trunc?" [TRUNCATED]\n":""));
    free(rbuf);
    return NETSNMPTRAPD_HANDLER_OK;
}


#define PRINT_V23_NOTIFICATION_FORMAT "%.4y-%.2m-%.2l %.2h:%.2j:%.2k %B [%b]:\n%v\n"

/*
 *  Trap handler for logging to a file
 */
int   print_handler(   netsnmp_pdu           *pdu,
                       netsnmp_transport     *transport,
                       netsnmp_trapd_handler *handler)
{
    u_char         *rbuf = NULL;
    size_t          r_len = 64, o_len = 0;
    int             trunc = 0;
    extern int      dropauth;

    DEBUGMSGTL(( "snmptrapd", "print_handler\n"));

    /*
     *  Don't bother logging authentication failures
     *  XXX - can we handle this via suitable handler entries instead?
     */
    if (pdu->trap_type == SNMP_TRAP_AUTHFAIL && dropauth)
        return NETSNMPTRAPD_HANDLER_OK;

    if ((rbuf = (u_char *) calloc(r_len, 1)) == NULL) {
        snmp_log(LOG_ERR, "couldn't display trap -- malloc failed\n");
        return NETSNMPTRAPD_HANDLER_FAIL;	/* Failed but keep going */
    }

    /*
     *  If there's a format string registered for this trap, then use it.
     */
    if (handler && handler->format) {
        DEBUGMSGTL(( "snmptrapd", "format = '%s'\n", handler->format));
        if (*handler->format) {
            trunc = !realloc_format_trap(&rbuf, &r_len, &o_len, 1,
                                     handler->format, pdu, transport);
        } else {
            free(rbuf);
            return NETSNMPTRAPD_HANDLER_OK;    /* A 0-length format string means don't log */
        }

    /*
     *  Otherwise (i.e. a NULL handler format string),
     *      use a standard output format setting
     *      either configurable, or hardwired
     *
     *  XXX - v1 traps use a different routine for hardwired output
     *        Do we actually need this separate v1 routine?
     *        Or would a suitable format string be sufficient?
     */
    } else {
	if ( pdu->command == SNMP_MSG_TRAP ) {
            if (print_format1) {
                DEBUGMSGTL(( "snmptrapd", "print_format v1 = '%s'\n", print_format1));
                trunc = !realloc_format_trap(&rbuf, &r_len, &o_len, 1,
                                             print_format1, pdu, transport);
	    } else {
                DEBUGMSGTL(( "snmptrapd", "v1 format\n"));
                trunc = !realloc_format_plain_trap(&rbuf, &r_len, &o_len, 1,
                                                   pdu, transport);
	    }
	} else {
            if (print_format2) {
                DEBUGMSGTL(( "snmptrapd", "print_format v2 = '%s'\n", print_format2));
                trunc = !realloc_format_trap(&rbuf, &r_len, &o_len, 1,
                                             print_format2, pdu, transport);
	    } else {
                DEBUGMSGTL(( "snmptrapd", "v2/3 format\n"));
                trunc = !realloc_format_trap(&rbuf, &r_len, &o_len, 1,
                                             PRINT_V23_NOTIFICATION_FORMAT,
                                             pdu, transport);
	    }
        }
    }
    snmp_log(LOG_INFO, "%s%s", rbuf, (trunc?" [TRUNCATED]\n":""));
    free(rbuf);
    return NETSNMPTRAPD_HANDLER_OK;
}


/*
 *  Trap handler for invoking a suitable script
 */
void
send_handler_data(FILE * file, struct hostent *host,
                  netsnmp_pdu *pdu, netsnmp_transport *transport)
{
    netsnmp_variable_list tmpvar, *vars;
    static oid      trapoids[] = { 1, 3, 6, 1, 6, 3, 1, 1, 5, 0 };
    static oid      snmpsysuptime[] = { 1, 3, 6, 1, 2, 1, 1, 3, 0 };
    static oid      snmptrapoid[] = { 1, 3, 6, 1, 6, 3, 1, 1, 4, 1, 0 };
    static oid      snmptrapent[] = { 1, 3, 6, 1, 6, 3, 1, 1, 4, 3, 0 };
    static oid      snmptrapaddr[] = { 1, 3, 6, 1, 6, 3, 18, 1, 3, 0 };
    static oid      snmptrapcom[] = { 1, 3, 6, 1, 6, 3, 18, 1, 4, 0 };
    oid             enttrapoid[MAX_OID_LEN];
    int             enttraplen = pdu->enterprise_length;

    if (transport != NULL && transport->f_fmtaddr != NULL) {
        char *tstr = transport->f_fmtaddr(transport, pdu->transport_data,
                                          pdu->transport_data_length);
        if (tstr != NULL) {
            fprintf(file, "%s\n%s\n", host ? host->h_name : tstr, tstr);
            free(tstr);
        }
    } else {
        fprintf(file, "%s\n<UNKNOWN>\n", host ? host->h_name : "<UNKNOWN>");
    }
    if (pdu->command == SNMP_MSG_TRAP) {
        /*
         * convert a v1 trap to a v2 variable binding list:
         * The uptime and trapOID go first in the list. 
         */
        tmpvar.val.integer = (long *) &pdu->time;
        tmpvar.val_len = sizeof(pdu->time);
        tmpvar.type = ASN_TIMETICKS;
        fprint_variable(file, snmpsysuptime,
                        sizeof(snmpsysuptime) / sizeof(oid), &tmpvar);
        tmpvar.type = ASN_OBJECT_ID;
        if (pdu->trap_type == SNMP_TRAP_ENTERPRISESPECIFIC) {
            memcpy(enttrapoid, pdu->enterprise, sizeof(oid) * enttraplen);
            if (enttrapoid[enttraplen - 1] != 0)
                enttrapoid[enttraplen++] = 0;
            enttrapoid[enttraplen++] = pdu->specific_type;
            tmpvar.val.objid = enttrapoid;
            tmpvar.val_len = enttraplen * sizeof(oid);
        } else {
            trapoids[9] = pdu->trap_type + 1;
            tmpvar.val.objid = trapoids;
            tmpvar.val_len = 10 * sizeof(oid);
        }
        fprint_variable(file, snmptrapoid,
                        sizeof(snmptrapoid) / sizeof(oid), &tmpvar);
    }
    /*
     * do the variables in the pdu 
     */
    for (vars = pdu->variables; vars; vars = vars->next_variable) {
        fprint_variable(file, vars->name, vars->name_length, vars);
    }
    if (pdu->command == SNMP_MSG_TRAP) {
        /*
         * convert a v1 trap to a v2 variable binding list:
         * The enterprise goes last. 
         */
        tmpvar.val.string = pdu->agent_addr;
        tmpvar.val_len = 4;
        tmpvar.type = ASN_IPADDRESS;
        fprint_variable(file, snmptrapaddr,
                        sizeof(snmptrapaddr) / sizeof(oid), &tmpvar);
        tmpvar.val.string = pdu->community;
        tmpvar.val_len = pdu->community_len;
        tmpvar.type = ASN_OCTET_STR;
        fprint_variable(file, snmptrapcom,
                        sizeof(snmptrapcom) / sizeof(oid), &tmpvar);
        tmpvar.val.objid = pdu->enterprise;
        tmpvar.val_len = pdu->enterprise_length * sizeof(oid);
        tmpvar.type = ASN_OBJECT_ID;
        fprint_variable(file, snmptrapent,
                        sizeof(snmptrapent) / sizeof(oid), &tmpvar);
    }
}

void
do_external(char *cmd, struct hostent *host,
            netsnmp_pdu *pdu, netsnmp_transport *transport)
{
    FILE           *file;
    int             oldquick, result;

    DEBUGMSGTL(("snmptrapd", "Running: %s\n", cmd));
    oldquick = snmp_get_quick_print();
    snmp_set_quick_print(1);
    if (cmd) {
#ifndef WIN32
        int             fd[2];
        int             pid;

        if (pipe(fd)) {
            snmp_log_perror("pipe");
        }
        if ((pid = fork()) == 0) {
            /*
             * child 
             */
            close(0);
            if (dup(fd[0]) != 0) {
                snmp_log_perror("dup");
            }
            close(fd[1]);
            close(fd[0]);
            system(cmd);
            exit(0);
        } else if (pid > 0) {
            file = fdopen(fd[1], "w");
            send_handler_data(file, host, pdu, transport);
            fclose(file);
            close(fd[0]);
            close(fd[1]);
            if (waitpid(pid, &result, 0) < 0) {
                snmp_log_perror("waitpid");
            }
        } else {
            snmp_log_perror("fork");
        }
#else
        char            command_buf[128];
        char            file_buf[L_tmpnam];

        tmpnam(file_buf);
        file = fopen(file_buf, "w");
        if (!file) {
            fprintf(stderr, "fopen: %s: %s\n", file_buf, strerror(errno));
        } else {
            send_handler_data(file, host, pdu, transport);
            fclose(file);
            snprintf(command_buf, sizeof(command_buf),
                     "%s < %s", cmd, file_buf);
            command_buf[ sizeof(command_buf)-1 ] = 0;
            result = system(command_buf);
            if (result == -1)
                fprintf(stderr, "system: %s: %s\n", command_buf,
                        strerror(errno));
            else if (result)
                fprintf(stderr, "system: %s: %d\n", command_buf, result);
            remove(file_buf);
        }
#endif                          /* WIN32 */
    }
    snmp_set_quick_print(oldquick);
}

#define EXECUTE_FORMAT	"%B\n%b\n%V\n%v\n"

int   command_handler( netsnmp_pdu           *pdu,
                       netsnmp_transport     *transport,
                       netsnmp_trapd_handler *handler)
{
    u_char         *rbuf = NULL;
    size_t          r_len = 64, o_len = 0;
    int             oldquick;

    DEBUGMSGTL(( "snmptrapd", "command_handler\n"));
    DEBUGMSGTL(( "snmptrapd", "token = '%s'\n", handler->token));
    if (handler && handler->token && *handler->token) {
	netsnmp_pdu    *v2_pdu = NULL;
	if (pdu->command == SNMP_MSG_TRAP)
	    v2_pdu = convert_v1pdu_to_v2(pdu);
	else
	    v2_pdu = pdu;
        oldquick = snmp_get_quick_print();
        snmp_set_quick_print(1);

        /*
	 * Format the trap and pass this string to the external command
	 */
        if ((rbuf = (u_char *) calloc(r_len, 1)) == NULL) {
            snmp_log(LOG_ERR, "couldn't display trap -- malloc failed\n");
            return NETSNMPTRAPD_HANDLER_FAIL;	/* Failed but keep going */
        }

        /*
         *  If there's a format string registered for this trap, then use it.
         *  Otherwise use the standard execution format setting.
         */
        if (handler && handler->format && *handler->format) {
            DEBUGMSGTL(( "snmptrapd", "format = '%s'\n", handler->format));
            realloc_format_trap(&rbuf, &r_len, &o_len, 1,
                                             handler->format,
                                             v2_pdu, transport);
        } else {
            DEBUGMSGTL(( "snmptrapd", "execute format\n"));
            realloc_format_trap(&rbuf, &r_len, &o_len, 1,
                                             EXECUTE_FORMAT,
                                             v2_pdu, transport);
	}

        /*
         *  and pass this formatted string to the command specified
         */
        run_shell_command(handler->token, (char*)rbuf, NULL, 0);   /* Not interested in output */
        snmp_set_quick_print(oldquick);
        if (pdu->command == SNMP_MSG_TRAP)
            snmp_free_pdu(v2_pdu);
        free(rbuf);
    }
    return NETSNMPTRAPD_HANDLER_OK;
}




/*
 *  Trap handler for doing something with "event" traps
 *      (not entirely clear what this is about ???)
 */
	/* XXX - in snmptrapd.c */
void event_input(netsnmp_variable_list * vp);

int   event_handler( netsnmp_pdu           *pdu,
                     netsnmp_transport     *transport,
                     netsnmp_trapd_handler *handler)
{
    DEBUGMSGTL(( "snmptrapd", "event_handler\n"));
    event_input(pdu->variables);
    return NETSNMPTRAPD_HANDLER_OK;
}


/*
 *  Trap handler for forwarding to the AgentX master agent
 */
int axforward_handler( netsnmp_pdu           *pdu,
                       netsnmp_transport     *transport,
                       netsnmp_trapd_handler *handler)
{
    send_v2trap( pdu->variables );
    return NETSNMPTRAPD_HANDLER_OK;
}

/*
 *  Trap handler for forwarding to another destination
 */
int   forward_handler( netsnmp_pdu           *pdu,
                       netsnmp_transport     *transport,
                       netsnmp_trapd_handler *handler)
{
    netsnmp_session session, *ss;
    netsnmp_pdu *pdu2;
    char buf[BUFSIZ], *cp;

    DEBUGMSGTL(( "snmptrapd", "forward_handler (%s)\n", handler->token));

    snmp_sess_init( &session );
    if (strchr( handler->token, ':') == NULL) {
        snprintf( buf, BUFSIZ, "%s:%d", handler->token, SNMP_TRAP_PORT);
        cp = buf;
    } else {
        cp = handler->token;
    }
    session.peername = cp;
    session.version  = pdu->version;
    ss = snmp_open( &session );
    if (!ss)
        return NETSNMPTRAPD_HANDLER_FAIL;

    /* XXX: wjh we should be caching sessions here and not always
       reopening a session.  It's very ineffecient, especially with v3
       INFORMS which may require engineID probing */

    pdu2 = snmp_clone_pdu(pdu);
    if (pdu2->transport_data) {
        free(pdu2->transport_data);
        pdu2->transport_data        = NULL;
        pdu2->transport_data_length = 0;
    }
    if (!snmp_send( ss, pdu2 )) {
	snmp_sess_perror("Forward failed", ss);
	snmp_free_pdu(pdu2);
    }
    snmp_close( ss );
    return NETSNMPTRAPD_HANDLER_OK;
}

#if defined(USING_NOTIFICATION_LOG_MIB_NOTIFICATION_LOG_MODULE) && defined(USING_AGENTX_SUBAGENT_MODULE) && !defined(NETSNMP_SNMPTRAPD_DISABLE_AGENTX)
/*
 *  "Notification" handler for implementing NOTIFICATION-MIB
 *  		(presumably)
 */
int   notification_handler(netsnmp_pdu           *pdu,
                           netsnmp_transport     *transport,
                           netsnmp_trapd_handler *handler)
{
    DEBUGMSGTL(( "snmptrapd", "notification_handler\n"));
    log_notification(pdu, transport);
    return NETSNMPTRAPD_HANDLER_OK;
}
#endif 

/*-----------------------------
 *
 * Main driving code, to process an incoming trap
 *
 *-----------------------------*/



int
snmp_input(int op, netsnmp_session *session,
           int reqid, netsnmp_pdu *pdu, void *magic)
{
    oid stdTrapOidRoot[] = { 1, 3, 6, 1, 6, 3, 1, 1, 5 };
    oid snmpTrapOid[]    = { 1, 3, 6, 1, 6, 3, 1, 1, 4, 1, 0 };
    oid trapOid[MAX_OID_LEN+2] = {0};
    int trapOidLen;
    netsnmp_variable_list *vars;
    netsnmp_trapd_handler *traph;
    netsnmp_transport *transport = (netsnmp_transport *) magic;
    int ret;
    extern netsnmp_trapd_handler *netsnmp_auth_global_traphandlers;
    extern netsnmp_trapd_handler *netsnmp_pre_global_traphandlers;
    extern netsnmp_trapd_handler *netsnmp_post_global_traphandlers;


    switch (op) {
    case NETSNMP_CALLBACK_OP_RECEIVED_MESSAGE:
        /*
         * Drops packets with reception problems
         */
        if (session->s_snmp_errno) {
            /* drop problem packets */
            return 1;
        }

        /*
	 * Determine the OID that identifies the trap being handled
	 */
        DEBUGMSGTL(("snmptrapd", "input: %x\n", pdu->command));
        switch (pdu->command) {
        case SNMP_MSG_TRAP:
            /*
	     * Convert v1 traps into a v2-style trap OID
	     *    (following RFC 2576)
	     */
            if (pdu->trap_type == SNMP_TRAP_ENTERPRISESPECIFIC) {
                trapOidLen = pdu->enterprise_length;
                memcpy(trapOid, pdu->enterprise, sizeof(oid) * trapOidLen);
                if (trapOid[trapOidLen - 1] != 0) {
                    trapOid[trapOidLen++] = 0;
                }
                trapOid[trapOidLen++] = pdu->specific_type;
            } else {
                memcpy(trapOid, stdTrapOidRoot, sizeof(stdTrapOidRoot));
                trapOidLen = OID_LENGTH(stdTrapOidRoot);  /* 9 */
                trapOid[trapOidLen++] = pdu->trap_type+1;
            }
            break;

        case SNMP_MSG_TRAP2:
        case SNMP_MSG_INFORM:
            /*
	     * v2c/v3 notifications *should* have snmpTrapOID as the
	     *    second varbind, so we can go straight there.
	     *    But check, just to make sure
	     */
            vars = pdu->variables;
            if (vars)
                vars = vars->next_variable;
            if (!vars || snmp_oid_compare(vars->name, vars->name_length,
                                          snmpTrapOid, OID_LENGTH(snmpTrapOid))) {
	        /*
		 * Didn't find it!
		 * Let's look through the full list....
		 */
		for ( vars = pdu->variables; vars; vars=vars->next_variable) {
                    if (!snmp_oid_compare(vars->name, vars->name_length,
                                          snmpTrapOid, OID_LENGTH(snmpTrapOid)))
                        break;
                }
                if (!vars) {
	            /*
		     * Still can't find it!  Give up.
		     */
		    snmp_log(LOG_ERR, "Cannot find TrapOID in TRAP2 PDU\n");
		    return 1;		/* ??? */
		}
	    }
            memcpy(trapOid, vars->val.objid, vars->val_len);
            trapOidLen = vars->val_len /sizeof(oid);
            break;

        default:
            /* SHOULDN'T HAPPEN! */
            return 1;	/* ??? */
	}
        DEBUGMSGTL(( "snmptrapd", "Trap OID: "));
        DEBUGMSGOID(("snmptrapd", trapOid, trapOidLen));
        DEBUGMSG(( "snmptrapd", "\n"));


        /*
	 *  OK - We've found the Trap OID used to identify this trap.
         *  Call each of the various lists of handlers:
         *     a) authentication-related handlers,
         *     b) other handlers to be applied to all traps
         *		(*before* trap-specific handlers)
         *     c) the handler(s) specific to this trap
t        *     d) any other global handlers
         *
	 *  In each case, a particular trap handler can abort further
         *     processing - either just for that particular list,
         *     or for the trap completely.
         *
	 *  This is particularly designed for authentication-related
	 *     handlers, but can also be used elsewhere.
         *
         *  OK - Enough waffling, let's get to work.....
	 */

        /*
	 *  a) authentication handlers
	 */
        traph = netsnmp_auth_global_traphandlers;
        DEBUGMSGTL(("snmptrapd", "Running auth trap handlers\n"));
	while (traph) {
            if (!netsnmp_trapd_check_auth(traph->authtypes)) {
                traph = traph->nexth;
                continue; /* we continue on and skip this one */
            }
	    ret = (*(traph->handler))(pdu, transport, traph);
            if (ret == NETSNMPTRAPD_HANDLER_FINISH)
                return 1;
            if (ret == NETSNMPTRAPD_HANDLER_BREAK)
                break;
	    traph = traph->nexth;
	}

        /*
	 *  b) pre-specific global handlers
	 */
        traph = netsnmp_pre_global_traphandlers;
        DEBUGMSGTL(("snmptrapd", "Running pre-global trap handlers\n"));
	while (traph) {
            if (!netsnmp_trapd_check_auth(traph->authtypes)) {
                traph = traph->nexth;
                continue; /* we continue on and skip this one */
            }
	    ret = (*(traph->handler))(pdu, transport, traph);
            if (ret == NETSNMPTRAPD_HANDLER_FINISH)
                return 1;
            if (ret == NETSNMPTRAPD_HANDLER_BREAK)
                break;
	    traph = traph->nexth;
	}

        /*
	 *  c) trap-specific handlers
	 */
        DEBUGMSGTL(("snmptrapd", "Running trap specific handlers\n"));
        traph = netsnmp_get_traphandler(trapOid, trapOidLen);
	while (traph) {
            if (!netsnmp_trapd_check_auth(traph->authtypes)) {
                traph = traph->nexth;
                continue; /* we continue on and skip this one */
            }
	    ret = (*(traph->handler))(pdu, transport, traph);
            if (ret == NETSNMPTRAPD_HANDLER_FINISH)
                return 1;
            if (ret == NETSNMPTRAPD_HANDLER_BREAK)
                break;
	    traph = traph->nexth;
	}

        /*
	 *  d) other global handlers
	 */
        DEBUGMSGTL(("snmptrapd", "Running global handlers\n"));
        traph = netsnmp_post_global_traphandlers;
	while (traph) {
            if (!netsnmp_trapd_check_auth(traph->authtypes)) {
                traph = traph->nexth;
                continue; /* we continue on and skip this one */
            }
	    ret = (*(traph->handler))(pdu, transport, traph);
            if (ret == NETSNMPTRAPD_HANDLER_FINISH)
                return 1;
            if (ret == NETSNMPTRAPD_HANDLER_BREAK)
                break;
	    traph = traph->nexth;
	}

	if (pdu->command == SNMP_MSG_INFORM) {
	    netsnmp_pdu *reply = snmp_clone_pdu(pdu);
	    if (!reply) {
		snmp_log(LOG_ERR, "couldn't clone PDU for INFORM response\n");
	    } else {
		reply->command = SNMP_MSG_RESPONSE;
		reply->errstat = 0;
		reply->errindex = 0;
		if (!snmp_send(session, reply)) {
		    snmp_sess_perror("snmptrapd: Couldn't respond to inform pdu",
                                    session);
		    snmp_free_pdu(reply);
		}
	    }
	}

        break;

    case NETSNMP_CALLBACK_OP_TIMED_OUT:
        snmp_log(LOG_ERR, "Timeout: This shouldn't happen!\n");
        break;

    case NETSNMP_CALLBACK_OP_SEND_FAILED:
        snmp_log(LOG_ERR, "Send Failed: This shouldn't happen either!\n");
        break;

    case NETSNMP_CALLBACK_OP_CONNECT:
    case NETSNMP_CALLBACK_OP_DISCONNECT:
        /* Ignore silently */
        break;

    default:
        snmp_log(LOG_ERR, "Unknown operation (%d): This shouldn't happen!\n", op);
        break;
    }
    return 0;
}

