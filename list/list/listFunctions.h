#pragma once

#include <stdbool.h>

typedef struct DoubleList;

typedef struct Position;

void addAfter(DoubleList* list, Position* position, int value);

void addBefore(DoubleList* list, Position* position, int value);


// Returns value of element in position "index". If unsuccesful, "success" is false and returns 0.
int value(DoubleList** list, const int index, bool* success)