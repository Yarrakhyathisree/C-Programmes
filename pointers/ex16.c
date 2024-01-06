#include<stdio.h>
typedef struct employe
{
    int empid;
    char empname[10];
    int empsalary;
}e;
void read(e*);
void display(e*);
int main()
{
    e e1,*ptr;
    ptr=&e1;
    read(ptr);
	display(ptr);
	return 0;
}
void read(e *ptr1)
{
    printf("enter the employeid:");
    scanf("%d",&ptr1->empid);
	printf("enter the employe name:");
	scanf("%s",ptr1->empname);
	printf("enter the employe salary:");
	scanf("%d",&ptr1->empsalary);
}
void display(e *ptr2)
{
	printf("the employeid=%d\n",ptr2->empid);
	printf("the employe name=%s\n",ptr2->empname);
	printf("the employe salary=%d\n",ptr2->empsalary);
}
