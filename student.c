/*Create a structure Student. Create array of 10 students using MACRO and display data in
tabular form. */

#include<stdio.h>

struct student
{
int st_id;
char name[10];
double fees;

};

int main()
{

struct student s[3];
int i;

for(i=0; i<3; i++)
{
printf("enter student id, name, fees:");
scanf("%d%s%lf",&s[i].st_id,s[i].name,&s[i].fees);
}

for (i=0; i<3; i++)
{

empl(s[i]);
}
return 0;
}

void empl(struct student s)
{

printf("\n student id:%d",s.st_id);
printf("\n student name:%s",s.name);
printf("\n student:%lf",s.fees);
}


