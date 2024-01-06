#include<stdio.h>
#include<string.h>
typedef struct student
{
	int roll;
	char name[10];
	float fees;
}s;
int main()
{
	s s1,s2;
	s1.roll=12;
	strcpy(s1.name,"khyathi");
	s1.fees=2000.0;
	s2.roll=14;
	strcpy(s2.name,"prasanthi");
	s2.fees=2000.0;
	printf("the first student details are:\n");
    printf("the student roll is %d\n",s1.roll);
    printf("the student name is %s\n",s1.name);
    printf("the student fees is %f\n",s1.fees);
    printf("the second student details are:\n");
    printf("the student roll is %d\n",s2.roll);
    printf("the student name is %s\n",s2.name);
    printf("the student fees is %f",s2.fees);
    return 0;
}
