#include "listFunctions.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct ListElement
{
    int value;
    struct ListElement* previous;
    struct ListElement* next;
}ListElement;

typedef struct DoubleList
{
    struct ListElement* head;
}DoubleList;

typedef struct Position
{
    struct ListElement* position;
}Position;

void delete(DoubleList* list, Position* position)
{
    Position* iterator = list->head;
    while (!isEnd(iterator))
    {
        remove(list, position);
    }
}
