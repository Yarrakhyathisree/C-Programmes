#include<stdio.h>
#include<string.h>
struct student
{
	int roll;
	char name[10];
	float fees;
};
int main()
{
	struct student s1;
	s1.roll=12;
	strcpy(s1.name,"khyathi");
	s1.fees=2000.0;
	printf("the student details are:\n");
    printf("the student roll is %d\n",s1.roll);
    printf("the student name is %s\n",s1.name);
    printf("the student fees is %f",s1.fees);
    return 0;
}
