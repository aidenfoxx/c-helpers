# A bunch of helpful C libraries

## Array
Dynamic arrays which can be updated by index and allow for NULL padding between data indexes.

## HashTable
Dynamic sata storage based on uint32_t hashes.

## Hash
Simple hash functions for use with HashTable. Currently only supports murmur3.

## Memory
A memory manager which when activated will track allocated buffers, and report potential double frees, and provide information about the size of memory currently allocated. 

Overrides the default "stdlib.h" functions and is cross platform compatible by wrapping internal "stdlib.h" functions in brackets whilst overriding global functions with macros. File must be included in the header of each source file you wish to track.

## Database
A clean and simple interface for handling SQLite databases.

## Math
3D and vector math library. Functional, but not complete.

## File
Simple functions for reading, writing and appending files.