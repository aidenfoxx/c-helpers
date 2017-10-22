#ifndef DATABASE_H
#define DATABASE_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <limits.h>
#include <sqlite3.h>

#include "math.h"

typedef enum {
	DATABASE_SUCCESS = 0,
	DATABASE_ERROR = INT_MIN
} DatabaseStatus;

typedef sqlite3 Database;

typedef struct {
	unsigned bound;
	unsigned rows;
	unsigned columns;
	char **results;
	sqlite3_stmt *statement;
} DatabaseQuery;

Database *databaseOpen(const char*);
void databaseClose(Database*);

/**
 * Create select queries.
 */
DatabaseQuery *databaseQueryNew(Database*, const char*);
void databaseQueryDestroy(DatabaseQuery*);

void databaseQueryBindInt(DatabaseQuery*, int);
void databaseQueryBindFloat(DatabaseQuery*, float);
void databaseQueryBindVec2(DatabaseQuery*, Vec2);
void databaseQueryBindVec3(DatabaseQuery*, Vec3);
void databaseQueryBindVec4(DatabaseQuery*, Vec4);
void databaseQueryBindMat4(DatabaseQuery*, Mat4);
void databaseQueryBindString(DatabaseQuery*, char*);

int databaseQueryExecute(DatabaseQuery*);
int databaseQueryResults(DatabaseQuery*, char***);

/**
 * Single function query execution.
 */
int databaseExecute(Database*, const char*);

#endif