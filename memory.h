
#ifndef clox_memory_h
#define clox_memory_h

#include "common.h"
#include "object.h"


#define ALLOCATE(type, count) (type*)reallocate(NULL, 0, sizeof(type) * (count))

#define GROW_CAPACITY(capacity) ((capacity) < 8 ? 8 : (capacity) * 2)


#define GROW_ARRAY(type, pointer, oldCount, newCount) \
  (type *)reallocate(pointer, sizeof(type) * (oldCount), sizeof(type) * (newCount))

#define FREE(type, pointer) reallocate(pointer, sizeof(type), 0)

#define FREE_ARRAY(type, pointer, oldCount) reallocate(pointer, sizeof(type) * (oldCount), 0)

void *reallocate(void *pointer, size_t old_size, size_t new_size);

void freeObjects();


#endif
