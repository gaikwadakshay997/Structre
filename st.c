//Create a structure Employee. Accept data for 5 employees and display it.

#include<stdio.h>

struct emp
{
int emp_id;
char name[10];
double sal;

};

int main()
{

struct emp e[3];
int i;

for(i=0; i<3; i++)
{
printf("enter emp_id, emp_name, emp_sal");
scanf("%d%s%lf",&e[i].emp_id,e[i].name,&e[i].sal);
}

for (i=0; i<3; i++)
{

empl(e[i]);
}
return 0;
}

void empl(struct emp e)
{

printf("\n emp id:%d",e.emp_id);
printf("\n emp id:%s",e.name);
printf("\n emp id:%lf",e.sal);
}


