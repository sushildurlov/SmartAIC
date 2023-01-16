#include "dbconfig.h"

// extern PGconn *conn = NULL;
// extern PGresult *res = NULL;


    /**************************************
    postgres database login configuration
    ***************************************/


char *host = "localhost";
//char *port = "port";
//char *options = "options";
//char *tty = "tty";
char *dbname = "testdb1";
char *user = "postgres";
char *pwd = "postgres";

int createdb(PGconn *conn, const char *query)
{
    if (PQresultStatus(res) != PGRES_COMMAND_OK)
    {
        fprintf(stderr, "CREATE DATABASE failed: %s", PQerrorMessage(conn));
        PQclear(res);
        PQfinish(conn);
        return 1;
    }
}

int dropdb(PGconn *conn, const char *query)
{
    if (PQresultStatus(res) != PGRES_COMMAND_OK)
    {
        fprintf(stderr, "DATABASE DROP failed: %s", PQerrorMessage(conn));
        PQclear(res);
        PQfinish(conn);
        return 1;
    }
}

char connectdb(const char *conninfo)
{
    if (PQstatus(conn) != CONNECTION_OK)
    {
        fprintf(stderr, "Connection to database failed: %s", PQerrorMessage(conn));
        PQclear(res);
        PQfinish(conn);
        return 1;
    }
}

int createtable(PGconn *conn, const char *query)
{
    if (PQresultStatus(res) != PGRES_COMMAND_OK)
    {
        fprintf(stderr, "CREATE TABLE failed: %s", PQerrorMessage(conn));
        PQclear(res);
        PQfinish(conn);
        return 1;
    }
}

int insertdata(PGconn *conn, const char *query)
{

    if (PQresultStatus(res) != PGRES_COMMAND_OK)
    {
        fprintf(stderr, "DATA INSERT failed: %s", PQerrorMessage(conn));
        PQclear(res);
        PQfinish(conn);
        return 1;
    }
}