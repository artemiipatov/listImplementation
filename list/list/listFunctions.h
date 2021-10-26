#pragma once

#include <stdbool.h>

typedef struct DoubleList DoubleList;

typedef struct Position Position;

void addAfter(DoubleList* list, Position* position, int value);

void addBefore(DoubleList* list, Position* position, int value);

int value(DoubleList* list, Position* position);

void setValue(DoubleList* list, Position* position, const int newValue);