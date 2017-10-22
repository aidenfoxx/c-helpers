#ifndef ARRAY_H
#define ARRAY_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <math.h>

#define ARRAY_INITIAL_CAPACITY 2

typedef enum {
	ARRAY_SUCCESS = 0,
	ARRAY_ERROR = INT_MIN
} ArrayStatus;

typedef struct {
	unsigned length;
	unsigned capacity;
	void **data;
} Array;

Array *arrayNew();
void arrayFree(Array*);

void arrayPush(Array*, void*);
void *arrayPop(Array*);

void arraySet(Array*, unsigned, void*);
void *arrayGet(Array*, unsigned);
int arrayRemove(Array*, unsigned);

unsigned arrayLength(Array*);
unsigned arrayData(Array*, void***);

#endif