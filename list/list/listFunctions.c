#include "listFunctions.h"
#include <stdlib.h>
#include <stdbool.h>

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

DoubleList* createList(DoubleList* list)
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

bool isEnd(Position* position)
{
    return position->position == NULL;
}

bool previous(DoubleList* list, Position* iterator)
{
    if (iterator->position != NULL)
    {
        iterator = iterator->position->previous;
        return true;
    }
    return false;
}

bool next(DoubleList* list, Position* iterator)
{
    if (iterator->position != NULL)
    {
        iterator = iterator->position->next;
        return true;
    }
    return false;
}

bool remove(DoubleList* list, Position* iterator)
{
    if (iterator->position->previous == NULL)
    {
        if (iterator->position->next == NULL)
        {
            free(iterator->position);
            list->head = NULL;
            return true;
        }
        iterator->position->next->previous = NULL;
        free(iterator->position);
        return true;
    }
    else
    {
        if (iterator->position->next == NULL)
        {
            free(iterator->position);
            list->head = NULL;
            return true;
        }
    }

}