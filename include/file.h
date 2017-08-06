#ifndef FILE_H
#define FILE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#define FILE_SUCCESS 0
#define FILE_ERROR -1
#define FILE_PERMISSIONS -2

int fileRead(const char*, char**);
int fileWrite(const char*, char*, unsigned);
int fileAppend(const char*, char*);

int fileBinaryRead(const char*, uint8_t**);
int fileBinaryWrite(const char*, uint8_t*, unsigned, unsigned);
int fileBinaryAppend(const char*, uint8_t*, unsigned);

#endif