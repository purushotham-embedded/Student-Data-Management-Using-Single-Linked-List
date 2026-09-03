#include "header.h"
#include<string.h>

void deleteRecord(SLL **ptr)
{
char ch;
int rollno;
char name[50];

SLL *temp,*prev;


if(*ptr == NULL)
{
    printf("No records found\n");
    return;
}


printf("\nR/r : Enter roll number to delete\n");
printf("N/n : Enter name to delete\n");

printf("Enter choice: ");
scanf(" %c",&ch);


if(ch == 'r' || ch == 'R')
{
    printf("Enter rollno to delete: ");
    scanf("%d",&rollno);
}


else if(ch == 'n' || ch == 'N')
{
    int found = 0;

    printf("Enter name to delete: ");
    scanf(" %49[^\n]",name);

    temp = *ptr;

    printf("\nMatching Records:\n");

    while(temp != NULL)
    {
        if(strcmp(temp->name,name) == 0)
        {
            printf("Rollno: %d\tName: %s\tPercentage: %.2f\n",
                    temp->rollno,
                    temp->name,
                    temp->percentage);

            found = 1;
        }

        temp = temp->next;
    }


    if(found == 0)
    {
        printf("Name not found\n");
        return;
    }


    printf("\nEnter rollno to delete: ");
    scanf("%d",&rollno);
}

else
{
    printf("Invalid choice\n");
    return;
}


temp = *ptr;
prev = NULL;


while(temp != NULL)
{
    if(temp->rollno == rollno)
    {
        if(prev == NULL)
            *ptr = temp->next;
        else
            prev->next = temp->next;


        free(temp);

        printf("\033[1;35mRecord deleted successfully\033[0m\n");

        return;
    }

    prev = temp;
    temp = temp->next;
}


printf("Roll number not found\n");


}
