#include<stdio.h>
struct student 
{
	int stno;
	char stname[10];
	int m1,m2,m3;
};
void main()
{
	struct student s;
	printf("enter the student no:");
	scanf("%d",&s.stno);
	printf("enter the student name:");
	scanf("%s",&s.stname);
	printf("enter m1 m2 and m3:");
	scanf("%d%d%d",&s.m1,&s.m2,&s.m3);
	printf("student number=%d\n",s.stno);
	printf("student name=%s\n",s.stname);
	printf("m1=%d\nm2=%d\nm3=%d",s.m1,s.m2,s.m3);
}
