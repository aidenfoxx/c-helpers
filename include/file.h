#ifndef FILE_H
#define FILE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

typedef enum {
	FILE_SUCCESS = 0,
	FILE_ERROR_READ = INT_MIN,
	FILE_ERROR_PERMISSIONS
} FileStatus;

int fileRead(const char*, char**);
int fileWrite(const char*, char*, unsigned);
int fileAppend(const char*, char*);

int fileBinaryRead(const char*, uint8_t**);
int fileBinaryWrite(const char*, uint8_t*, unsigned, unsigned);
int fileBinaryAppend(const char*, uint8_t*, unsigned);

#endif