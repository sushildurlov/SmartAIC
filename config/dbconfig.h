#ifndef DBCONFIG_H
#define DBCONFIG_H

// #pragma once

#include <stdio.h>
#include <stdlib.h>
#include <postgresql/libpq-fe.h>

extern PGconn *conn = NULL;
extern PGresult *res = NULL;
// Declare functions

int createdb(PGconn *conn, const char *query);

int dropdb(PGconn *conn, const char *query);

char connectdb(const char *conninfo);

int createtable(PGconn *conn, const char *query);

int insertdata(PGconn *conn, const char *query);

#endif /*End of DBCONFIG_H*/