#include<stdio.h>
typedef struct employe
{
	int empid;
	char empname[10];
	int empsalary;
}e;
void read(e*);
int main()
{
	e e1,*ptr;
	ptr=&e1;
	read(ptr);
	printf("the employe id=%d\n",ptr->empid);
	printf("the employe name=%s\n",ptr->empname);
	printf("the employe salary=%d\n",ptr->empsalary);
	return 0;
}
void read(e *ptr1)
{
	printf("enter the employe id:");
	scanf("%d",&ptr1->empid);
	printf("enter the employe name:");
	scanf("%s",ptr1->empname);
	printf("enter the empolye salary:");
	scanf("%d",&ptr1->empsalary);
}


