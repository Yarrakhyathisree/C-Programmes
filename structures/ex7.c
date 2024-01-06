#include<stdio.h>
//array of structures
typedef struct student 
{
	int rollno;
	char name[10];
	float fees;
}s;
int main()
{
	s s[60];
	int n,i;
	printf("enter the value of number of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the student rollno:");
		scanf("%d",&s[i].rollno);
		printf("enter the student name:");
		scanf("%s",&s[i].name);
		printf("enter the student fees:");
		scanf("%f",&s[i].fees);
	}
	for(i=0;i<n;i++)
	{
		printf("%d%s%f",s[i].rollno,s[i].name,s[i].fees);
	}
		return 0;
}
