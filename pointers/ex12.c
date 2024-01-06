#include<stdio.h>
struct student 
{
	int stno;
	char stname[10];
	int m1,m2,m3;
};
int main()
{
	struct student s[60];int i,n;
	printf("enter the number of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the student number:");
		scanf("%d",&s[i].stno);
		printf("enter the student name:");
		scanf("%s",s[i].stname);
		printf("enter m1,m2,m3:");
		scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
	}
	printf("student information are as follows:");
	for(i=0;i<n;i++)
	{
		printf("%d\n%s\n%d\n%d\n%d\n",s[i].stno,s[i].stname,s[i].m1,s[i].m2,s[i].m3);
	}
	return 0;
}
