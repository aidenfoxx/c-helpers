#ifndef ARRAY_H
#define ARRAY_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <math.h>

#define ARRAY_INITIAL_CAPACITY 2

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
void arrayRemove(Array*, unsigned);

unsigned arrayLength(Array*);
unsigned arrayData(Array*, void***);

#endif