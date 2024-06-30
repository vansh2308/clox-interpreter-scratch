// values => doubles 


#ifndef clox_value_h
#define clox_value_h

#include "common.h"

typedef double Value;

// constant pool => value array 
typedef struct{
  int capacity;
  int count; 
  Value* values;
} ValueArray;

void initValueArray(ValueArray* array);
void writeeValueArray(ValueArray* array, Value value);
void freeValueArray(ValueArray* array);


#endif