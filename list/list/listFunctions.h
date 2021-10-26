#pragma once

typedef struct DoubleList;

typedef struct Position;

void addAfter(DoubleList* list, Position* position, int value);

void addBefore(DoubleList* list, Position* position, int value);