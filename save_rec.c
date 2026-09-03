#include "header.h"

void saveRecord(SLL *ptr)
{
FILE *fp;

fp = fopen("data.txt","w");

if(fp == NULL)
{
    printf("File cannot be opened\n");
    return;
}


while(ptr != NULL)
{
    fprintf(fp,"%d|%s|%.2f\n",
            ptr->rollno,
            ptr->name,
            ptr->percentage);

    ptr = ptr->next;
}


fclose(fp);

printf("Data saved in data.txt file successfully\n");

}

void loadRecord(SLL **ptr)
{
FILE *fp;

SLL *new,*temp;

fp = fopen("data","r");

if(fp == NULL)
{
    return;
}


while(1)
{
    new = malloc(sizeof(SLL));

    if(new == NULL)
        break;


    if(fscanf(fp,"%d|%49[^|]|%f\n",
                &new->rollno,
                new->name,
                &new->percentage) != 3)
    {
        free(new);
        break;
    }


    new->next = NULL;


    if(*ptr == NULL)
    {
        *ptr = new;
    }

    else
    {
        temp = *ptr;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = new;
    }
}


fclose(fp);

printf("Records loaded from student.dat\n");

}
