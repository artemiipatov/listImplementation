#include "listFunctions.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct ListElement
{
    int value;
    struct ListElement* previous;
    struct ListElement* next;
<<<<<<< Functions
}ListElement;
=======
} ListElement;
>>>>>>> master

typedef struct DoubleList
{
    struct ListElement* head;
<<<<<<< Functions
}DoubleList;
=======
} DoubleList;
>>>>>>> master

typedef struct Position
{
    struct ListElement* position;
<<<<<<< Functions
}Position;
=======
} Position;

int value(DoubleList* list, Position* position)
{
    return position->position->value;
}

void setValue(DoubleList* list, Position* position, const int newValue)
{
    position->position->value = newValue;
}


>>>>>>> master

void delete(DoubleList* list, Position* position)
{
    Position* iterator = list->head;
    while (!isEnd(iterator))
    {
        remove(list, position);
    }
}
