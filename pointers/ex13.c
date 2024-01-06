#include<stdio.h>
typedef struct student 
{
	int rollno;
	char name[10];
	int marks;
}s;
int main()
{
	s s1,*ptr;
	ptr=&s1;
	printf("enter the student rollno:");
	scanf("%d",&ptr->rollno);
	printf("enter the student name:");
	scanf("%s",ptr->name);
	printf("enter the student marks:");
	scanf("%d",&ptr->marks);
	printf("the student rollno=%d\n",ptr->rollno);
	printf("the student name=%s\n",ptr->name);
	printf("the student marks=%d\n",ptr->marks);
	return 0;
}

