#include<stdio.h>
struct employe
{
	int empid;
	char empname[10];
	float empsalary;
};
int main()
{
	struct employe e;
	printf("enter the employee id:");
	scanf("%d",&e.empid);
	printf("enter the empname:");
	scanf("%s",e.empname);
	printf("enter the empsalary:");
	scanf("%f",&e.empsalary);
	printf("the employee id=%d\n",e.empid);
	printf("the employee name=%s\n",e.empname);
	printf("the employee salary=%f\n",e.empsalary);
	return 0;
}
