#include "header.h"
#include<string.h>
void modifyRecord(SLL *ptr)
{
char ch;
int rollno;
char name[50];
float percentage;

int found = 0;

SLL *temp;


if(ptr == NULL)
{
    printf("No records found\n");
    return;
}


printf("\nEnter which record to search for modification\n");

printf("R/r : Search by roll number\n");
printf("N/n : Search by name\n");
printf("P/p : Search by percentage\n");

printf("Enter choice: ");
scanf(" %c",&ch);


if(ch == 'r' || ch == 'R')
{
    printf("Enter rollno: ");
    scanf("%d",&rollno);
}


else if(ch == 'n' || ch == 'N')
{
    printf("Enter name: ");
    scanf(" %49[^\n]",name);

    temp = ptr;

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


    printf("\nEnter rollno to modify: ");
    scanf("%d",&rollno);
}


else if(ch == 'p' || ch == 'P')
{
    printf("Enter percentage: ");
    scanf("%f",&percentage);

    temp = ptr;

    printf("\nMatching Records:\n");

    while(temp != NULL)
    {
        if(temp->percentage == percentage)
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
        printf("Percentage not found\n");
        return;
    }


    printf("\nEnter rollno to modify: ");
    scanf("%d",&rollno);
}


else
{
    printf("Invalid choice\n");
    return;
}


while(ptr != NULL)
{
    if(ptr->rollno == rollno)
    {
        printf("\nCurrent Details:\n");

        printf("Rollno: %d\n",ptr->rollno);
        printf("Name: %s\n",ptr->name);
        printf("Percentage: %.2f\n",ptr->percentage);


        printf("\nEnter new name: ");
        scanf(" %49[^\n]",ptr->name);


        do
        {
            printf("Enter new percentage: ");
            scanf("%f",&ptr->percentage);

            if(ptr->percentage < 0 ||
               ptr->percentage > 100)
            {
                printf("Percentage should be between 0 and 100\n");
            }

        }while(ptr->percentage < 0 ||
               ptr->percentage > 100);


        printf("Record modified successfully\n");

        return;
    }

    ptr = ptr->next;
}


printf("Roll number not found\n");

}
