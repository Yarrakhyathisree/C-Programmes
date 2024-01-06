//pointer to structure
#include<stdio.h>
typedef struct student
{
	char name[10];
	int id;
}s;
main()
{
	s s1,*ptr;
 	ptr=&s1;
 	printf("enter the subject name:");
 	//scanf("%s",s1.name);
 	scanf("%s",&ptr->name);
 	printf("enter the id:");
 	//scanf("%d",&s1.id);
 	scanf("%d",&ptr->id);
 	printf("the student details are:");
 	//printf("subject name=%s \n id=%d",s1.name,s1.id);
 	printf("subject name=%s",ptr->name);
 	printf("id=%d",ptr->id);
 	printf("subject name=%s",(*ptr).name);
 	printf("id=%d",(*ptr).id);
}
