//pointer to structure with out DMA
#include<stdio.h>
typedef struct student
{
	int rollno;
	char sname[20];
	int marks[6],total;
}s;
void read(s *);
void display(s *);
int main()
{
	s s1,*ptr;
	ptr=&s1;
	read(ptr);
	display(ptr);
	return 0;
}
void read(s *ptr)
{
	int i;
	ptr->total=0;
	printf("enter the rollno and name of the student:");
	scanf("%d%s",&ptr->rollno,ptr->sname);
	printf("Enter the 6 subject marks:");
	for(i=0;i<6;i++){
	scanf("%d",&ptr->marks[i]);
	ptr->total=ptr->total+ptr->marks[i];}
}
void display(s *ptr)
{
	int i;
	printf("The student details are:");
	printf("The rollno and name of the student is:");
	printf("%d%s",ptr->rollno,ptr->sname);
	printf("The 6 subject marks are:\n");
	for(i=0;i<6;i++)
	{
		printf("%d\t",ptr->marks[i]);
	}
	printf("the total marks:");
	printf("%d",ptr->total);
}
