// WAP to demonstrate typedef keyword.

#include<stdio.h>
typedef size 3

struct student
{
int st_id;
char name[10];
double fees;

};

int main()
{

struct student s[size];
int i;

for(i=0; i<size; i++)
{
printf("enter student id, name, fees:");
scanf("%d%s%lf",&s[i].st_id,s[i].name,&s[i].fees);
}

for (i=0; i<size; i++)
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


