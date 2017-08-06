#ifndef MEMORY_H
#define MEMORY_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>
#include <math.h>

#define malloc(a) memoryMalloc(a ,__FILE__, __LINE__)
#define calloc(a, b) memoryCalloc(a, b, __FILE__, __LINE__)
#define realloc(a, b) memoryRealloc(a, b, __FILE__, __LINE__)
#define free(a) memoryFree(a, __FILE__, __LINE__)

#define MEMORY_INITIAL_CAPACITY 512
#define MEMORY_RESIZE_MAX .75
#define MEMORY_RESIZE_MIN .25

typedef struct {
	uintptr_t address;
	size_t size;
	void **buffer;
} MemoryBuffer;

typedef struct {
	unsigned capacity;
	unsigned length;
	unsigned count;
	MemoryBuffer *buffers;
} Memory;

void memoryInit();
void memoryDestroy();

int memorySet(void*, size_t);
int memoryRemove(void*);

/**
 * Core memory functions.
 */
void *memoryMalloc(size_t, const char*, unsigned);
void *memoryCalloc(size_t, size_t, const char*, unsigned);
void *memoryRealloc(void*, size_t, const char*, unsigned);
void memoryFree(void*, const char*, unsigned);

size_t memoryBufferSize();
unsigned memoryBufferCount();

#endif

