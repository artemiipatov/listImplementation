#include "listFunctions.h"
#include <stdlib.h>

typedef struct ListElement
{
    int value;
    struct ListElement* previous;
    struct ListElement* next;
} ListElement;

typedef struct DoubleList
{
    struct ListElement* head;
} DoubleList;

typedef struct Position
{
    struct ListElement* position;
} Position;

int value(DoubleList* list, Position* position)
{
    return position->position->value;
}

void setValue(DoubleList* list, Position* position, const int newValue)
{
    position->position->value = newValue;
}



