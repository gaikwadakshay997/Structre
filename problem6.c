//Create a structure Employee. Pass it to a function by value.

#include<stdio.h>


struct emp
{
int emp_id;
char name[10];
double sal;
};

int main()
{
int i;

struct emp e[2];

for(i=0; i<2; i++)
{
printf("enter employee id, name & salary:");
scanf("%d%s%lf",&e[i].emp_id,e[i].name,&e[i].sal);

}

for (i=0; i<2; i++)
{

func(e[i]);


}
return 0;
}

int func(struct emp e)
{

printf("\n employee id:%d",e.emp_id);
printf("\n employee name:%s",e.name);
printf("\n employee salary:%lf",e.sal);

}
