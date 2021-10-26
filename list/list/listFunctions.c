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

int value(DoubleList* list, const int index, bool* success)
{
    if (list == NULL)
    {
        *success = false;
        return 0;
    }

    ListElement* element = list->head;
    int count = 0;

    while (count < index)
    {
        if (element->next != NULL)
        {
            *success = false;
            return 0;
        }
        element = element->next;
        ++count;
    }
    if (count == index)
    {
        *success = true;
        return element->value;
    }
    *success = false;
    return 0;
}


