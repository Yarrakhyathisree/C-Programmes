#include<stdio.h>
typedef struct student 
{
	int rollno;
	char name[10];
	int marks;
}s;
void read(s*);
void display(s*);
int main()
{
	s s1,*ptr;
	ptr=&s1;
	read(ptr);
	display(ptr);
	return 0;
}
void read(s *ptr1)
{
	printf("enter the student rollno:");
	scanf("%d",&ptr1->rollno);
	printf("enter the student name:");
	scanf("%s",ptr1->name);
	printf("enter the student marks:");
	scanf("%d",&ptr1->marks);
}
void display(s *ptr2)
{
	printf("the student rollno=%d\n",ptr2->rollno);
	printf("the student name=%s\n",ptr2->name);
	printf("the student marks=%d\n",ptr2->marks);
}
