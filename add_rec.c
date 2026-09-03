#include "header.h"

void addRecord(SLL **ptr)
{
        SLL *new,*temp;
        new=malloc(sizeof(SLL));

        printf("Enter the rollno\n");
        scanf("%d",&new->rollno);

        printf("Enter the name\n");
        scanf("%s",new->name);

        printf("Enter the percentage\n");
        scanf("%f",&new->percentage);

        new->next = NULL;

        if (*ptr == NULL)
        {
                *ptr = new;
        }
        else
        {
                temp = *ptr;

                while (temp->next != NULL)
                {
                        temp = temp->next;
                }

                temp->next = new;
        }
}
