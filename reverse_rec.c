#include"header.h"

void Reverselist(SLL **ptr)
{
SLL *prev = NULL;
SLL *current = *ptr;
SLL *next = NULL;

if(*ptr == NULL)
{
    printf("No records found\n");
    return;
}


while(current != NULL)
{
    next = current->next;

    current->next = prev;

    prev = current;

    current = next;
}


*ptr = prev;


printf("\033[1;35mReversed list successfully\033[0m\n");

}
