//passing array of structure to function
#include<stdio.h>
typedef struct 
{
	char name[10];
	int age;
	float marks;
}student;
void main()
{
	student s1[3];
	int i;
	//read student details 
	for(i=0;i<3;i++)
	{
	printf("enter the student details=%d \n",i+1);
	printf("enter the name of student :");
	scanf("%s",s1[i].name);
	printf("enter the age of student :");
	scanf("%d",&s1[i].age);
	printf("enter the marks of student :");
	scanf("%f",&s1[i].marks);
}
    display(s1,3);
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
