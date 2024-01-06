#include<stdio.h>
typedef struct student
{
	char name[20];
	int age;
}s;
void display(s);
s read();
int  main()
{
	s s1;
	s1=read();
	display(s1);
	return 0;
}
s read()
{
	s s1;
	printf("enter the student name:");
	scanf("%[^\n]",s1.name);
	printf("enter the student age:");
	scanf("%d",&s1.age);
	return s1;
}
void display(s s2)
{
	printf("print the information:");
	printf("the student name %s",s2.name);
	printf("the student age %d",s2.age);
}
