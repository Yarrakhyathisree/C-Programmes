//passing array of structure to function
#include<stdio.h>
typedef struct 
{
	char name[10];
	int age;
	float marks;
}student;
void read(student [],int );
void display(student [],int );
void main()
{
	student s1[3];
	int i;
	//read student details 
	read(s1,3);
   display(s1,3);
}
   void read(student s2[],int size)
   { int i;
   	for(i=0;i<3;i++)
	{
	
   	printf("enter the name of student :");
	scanf("%s",s2[i].name);
	printf("enter the age of student :");
	scanf("%d",&s2[i].age);
	printf("enter the marks of student :");
	scanf("%f",&s2[i].marks);}
}    

void display(student s2[],int a)
{
	int i;
	for(i=0;i<a;i++)
	{
	printf("the student details are:");
	printf("name of the students=%s",s2[i].name);
	printf("the age of the students =%d",s2[i].age);
	printf("the marks of students=%f",s2[i].marks);
}
}
