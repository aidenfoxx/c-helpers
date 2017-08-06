#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>
#include <math.h>

#define HASHTABLE_INITIAL_CAPACITY 512
#define HASHTABLE_RESIZE_MAX .75
#define HASHTABLE_RESIZE_MIN .25

typedef struct {
	void **data;
	uint8_t zero;
	uint32_t key;
} HashEntry;

typedef struct {
	unsigned capacity;
	unsigned length;
	unsigned count;
	HashEntry *entries;
} HashTable;

HashTable *hashTableNew();
void hashTableFree(HashTable*);

void hashTableSet(HashTable*, uint32_t, void*);
void *hashTableGet(HashTable*, uint32_t);
void hashTableRemove(HashTable*, uint32_t);

unsigned hashTableLength(HashTable*);
unsigned hashTableData(HashTable*, void***);

#endif