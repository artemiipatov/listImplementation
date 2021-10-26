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
    ListElement* head;
} DoubleList;

typedef struct Position
{
    ListElement* position;
} Position;

void createList(DoubleList* list)
{
    return calloc(1, sizeof(DoubleList));
}

void addAfter(DoubleList* list, Position* position, int value)
{
    ListElement* newElement = malloc(sizeof(ListElement));
    newElement->value = value;
    if (position->position == NULL)
    {
        list->head = newElement;
        return;
    }
    newElement->previous = position->position;
    position->position->next = newElement;
}

void addBefore(DoubleList* list, Position* position, int value)
{
    ListElement* newElement = malloc(sizeof(ListElement));
    newElement->value = value;
    if (position->position == NULL)
    {
        list->head = newElement;
        return;
    }
    if (position->position->previous != NULL)
    {
        newElement->previous = position->position->previous;
        position->position->previous = newElement;
    }
    newElement->next = position->position;
}