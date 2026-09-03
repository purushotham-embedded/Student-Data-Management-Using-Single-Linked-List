#include "header.h"
#include<string.h>

void sortlist(SLL **ptr)
{
char ch;

SLL *temp1,*temp2;

if(*ptr == NULL)
{
    printf("No records found\n");
    return;
}


printf("\nN/n : Sort with name\n");
printf("P/p : Sort with percentage\n");

printf("Enter choice: ");
scanf(" %c",&ch);


if(ch == 'n' || ch == 'N')
{
    for(temp1 = *ptr;
        temp1->next != NULL;
        temp1 = temp1->next)
    {
        for(temp2 = temp1->next;
            temp2 != NULL;
            temp2 = temp2->next)
        {
            if(strcmp(temp1->name,temp2->name) > 0)
            {
                int roll;
                float per;
                char name[50];


                roll = temp1->rollno;
                temp1->rollno = temp2->rollno;
                temp2->rollno = roll;


                strcpy(name,temp1->name);
                strcpy(temp1->name,temp2->name);
                strcpy(temp2->name,name);


                per = temp1->percentage;
                temp1->percentage = temp2->percentage;
                temp2->percentage = per;
            }
        }
    }

    printf("Sorted by name successfully\n");
}


else if(ch == 'p' || ch == 'P')
{
    for(temp1 = *ptr;
        temp1->next != NULL;
        temp1 = temp1->next)
    {
        for(temp2 = temp1->next;
            temp2 != NULL;
            temp2 = temp2->next)
        {
            if(temp1->percentage < temp2->percentage)
            {
                int roll;
                float per;
                char name[50];


                roll = temp1->rollno;
                temp1->rollno = temp2->rollno;
                temp2->rollno = roll;


                strcpy(name,temp1->name);
                strcpy(temp1->name,temp2->name);
                strcpy(temp2->name,name);


                per = temp1->percentage;
                temp1->percentage = temp2->percentage;
                temp2->percentage = per;
            }
        }
    }

    printf("Sorted by percentage successfully\n");
}


else
{
    printf("Invalid choice\n");
}

}
