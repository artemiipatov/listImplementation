#include "listFunctions.h"
#include <stdlib.h>

typedef struct ListElement
{
    int value;
    struct ListElement* previous;
    struct ListElement* next;
};

typedef struct DoubleList
{
    struct ListElement* list;
};

typedef struct Position
{
    struct ListElement* position;
};

