#include<stdio.h>
#include<string.h>
typedef struct student
{
	int roll;
	char name[10];
	float fees;
}s;
int main()
{
	s s1,s2;
	printf("enter the student one details:");
	scanf("%d%s%f",&s1.roll,s1.name,&s1.fees);
	printf("enter the student two details:");
	scanf("%d%s%f",&s2.roll,s2.name,&s2.fees);
	printf("the first student details are:\n");
    printf("the student roll is %d\n",s1.roll);
    printf("the student name is %s\n",s1.name);
    printf("the student fees is %f\n",s1.fees);
    printf("the second student details are:\n");
    printf("the student roll is %d\n",s2.roll);
    printf("the student name is %s\n",s2.name);
    printf("the student fees is %f",s2.fees);
    return 0;
}
