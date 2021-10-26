#pragma once
#include <stdbool.h>

typedef struct DoubleList DoubleList;

typedef struct Position Position;

DoubleList* createList(DoubleList* list);

bool previous(DoubleList* list, Position* iterator);

bool next(DoubleList* list, Position* iterator);

void addAfter(DoubleList* list, Position* position, int value);

void addBefore(DoubleList* list, Position* position, int value);

bool isEnd(Position* position);
