#include<stdio.h>
void display(s);
typedef struct student
{
	char name[20];
	int age;
}s;
int  main()
{
	s s1;
	printf("enter the student name:");
	scanf("%[^\n]",s1.name);
	printf("enter the student age:");
	scanf("%d",&s1.age);
	display(s1);
	return 0;
}
void display(s s2)
{
	printf("print the information:");
	printf("the student name %s",s2.name);
	printf("the student age %d",s2.age);
}
