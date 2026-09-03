Connection to blrvectorindia.ddns.net closed.
purushotham@PURUSHOTHAM:~$
#include <string.h>

typedef struct student
{
int rollno;
char name[50];
float percentage;
struct student *next;

} SLL;

/* Function declarations */

void addRecord(SLL **);
void deleteRecord(SLL **);
void showlist(SLL *);
void modifyRecord(SLL *);
void saveRecord(SLL *);
void loadRecord(SLL **);
void sortlist(SLL **);
void deleteallRecords(SLL **);
void Reverselist(SLL **);
int getRollNo(SLL *);
