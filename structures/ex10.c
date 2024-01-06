#include<stdio.h>
void display(e);
typedef struct employe 
{
	int empid;
	char name[10];
	float salary;
}e;
e read();
void main()
{
	e e2;
	e2=read();
	display(e2);
}
e read()
{
	e e1;
	printf("enter the details of employe");
	printf("enter the employid:");
	scanf("%d",&e1.empid);
	printf("enter the name of employe:");
	scanf("%s",e1.name);
	printf("enter the employe salary:");
	scanf("%f",&e1.salary);
	return e1;
}
void display(e e3)
{
	printf("the employe details are:");
	printf("employe id =%d\n employe name=%s\n employe salary=%f",e3.empid,e3.name,e3.salary);
}

