#include "header.h"

void showlist(SLL *ptr)
{
if(ptr == NULL)
{
printf("No student records available\n");
return;
}

printf("\n---------------------------------------------------------\n");
printf("Roll No.\tName\t\t\tPercentage\n");
printf("---------------------------------------------------------\n");


while(ptr != NULL)
{
    printf("%d\t\t%-20s\t%.2f\n",
            ptr->rollno,
            ptr->name,
            ptr->percentage);

    ptr = ptr->next;
}
printf("---------------------------------------------------------\n");
}
