#include<stdio.h>
#include<string.h>
typedef struct student
{
	int roll;
	char name[10];
	float fees;
	int m1,m2,m3,total,avg;
}s;
int main()
{
	s s1,s2;
	printf("enter the student one details:");
	scanf("%d%s%f%d%d%d",&s1.roll,s1.name,&s1.fees,&s1.m1,&s1.m2,&s1.m3);
	printf("enter the student two details:");
	scanf("%d%s%f%d%d%d",&s2.roll,s2.name,&s2.fees,&s2.m1,&s2.m2,&s2.m3);
	s1.total=s1.m1+s1.m2+s1.m3;
	s1.avg=s1.total/3;
	printf("the first student details are:\n");
    printf("the student roll is %d\n",s1.roll);
    printf("the student name is %s\n",s1.name);
    printf("the student fees is %f\n",s1.fees);
    printf("the student total is %d\n",s1.total);
    printf("the student average is %d\n",s1.avg);
    s2.total=s2.m1+s2.m2+s2.m3;
	s2.avg=s2.total/3;
    printf("the second student details are:\n");
    printf("the student roll is %d\n",s2.roll);
    printf("the student name is %s\n",s2.name);
    printf("the student fees is %f",s2.fees);
    printf("the student total is %d\n",s2.total);
    printf("the student average is %d\n",s2.avg);
    return 0;
}
