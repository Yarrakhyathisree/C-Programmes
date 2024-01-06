// passing pointer to structure to a function 
#include<stdio.h>

typedef struct student
{
	char name[10];
	int id;
}s;
void read(s *); 
void display(s *);
main()
{
	s s1,*ptr;
 	ptr=&s1;
 	read(ptr);//read(&s1)
 	display(ptr);
 }
 void read(s *p)
 {
 	printf("enter the subject name:");
 	//scanf("%s",s1.name);
 	scanf("%s",&p->name);
 	printf("enter the id:");
 	//scanf("%d",&s1.id);
 	scanf("%d",&p->id);
 }
 void display(s *p1)
 {
 	printf("the student details are:");
 	//printf("subject name=%s \n id=%d",s1.name,s1.id);
 	printf("subject name=%s",p1->name);
 	printf("id=%d",p1->id);
 	printf("subject name=%s",(*p1).name);
 	printf("id=%d",(*p1).id);
}
