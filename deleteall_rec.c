#include"header.h"

void deleteallRecords(SLL **ptr)
{
SLL *del;
int c = 1;

if(*ptr == NULL)
{
    printf("No records found\n");
    return;
}


while(*ptr != NULL)
{
    del = *ptr;

    *ptr = del->next;

    printf("Node %d deleted\n",c++);

    free(del);
}


*ptr = NULL;

printf("\033[1;35mAll records deleted successfully\033[0m\n");

}
