#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"header.h"

int main()
{
SLL *headptr = NULL;
char ch;

/* Load records when program starts */

loadRecord(&headptr);

while(1)
{
        printf("\033[1;34m");

        printf("******** STUDENT RECORD MENU ********\n");
        printf("a/A : Add new record\n");
        printf("d/D : Delete a record\n");
        printf("s/S : Show the list\n");
        printf("m/M : Modify a record\n");
        printf("v/V : Save records\n");
        printf("t/T : Sort the list\n");
        printf("l/L : Delete all the records\n");
        printf("r/R : Reverse the list\n");
        printf("e/E : Exit\n");
        printf("Enter your choice: ");

        printf("\033[0m");

    scanf(" %c",&ch);
printf("\033[1;33m");
    switch(ch)
    {
        case 'a':
        case 'A':
            addRecord(&headptr);
            break;

        case 'd':
        case 'D':
            deleteRecord(&headptr);
            break;

        case 's':
        case 'S':
            showlist(headptr);
            break;

        case 'm':
        case 'M':
            modifyRecord(headptr);
            break;

        case 'v':
        case 'V':
            saveRecord(headptr);
            break;

        case 't':
        case 'T':
            sortlist(&headptr);
            break;

        case 'l':
        case 'L':
            deleteallRecords(&headptr);
            break;

        case 'r':
        case 'R':
            Reverselist(&headptr);
            break;

        case 'e':
        case 'E':
        {
            char option;

            printf("\nS/s : Save and exit\n");
            printf("E/e : Exit without saving\n");

            printf("Enter your choice: ");
            scanf(" %c",&option);

            if(option == 's' || option == 'S')
            {
                saveRecord(headptr);
                deleteallRecords(&headptr);
                return 0;
            }
            else if(option == 'e' || option == 'E')
            {
                deleteallRecords(&headptr);
                return 0;
            }
            else
            {
                printf("\033[1;31mInvalid choice\033[0m\n");
            }

            break;
        }

        default:
            printf("\033[1;31mUnknown choice\033[0m\n");
    }
}
printf("\033[0m\n");
return 0;


}
