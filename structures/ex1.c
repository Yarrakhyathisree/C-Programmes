#include<stdio.h>
struct students
{
	int roll;
	char name[10];
	float fees;
}s1={12,"khyathi",2000.0};
int main()
{
	printf("the student details are:\n");
    printf("the student roll is %d\n",s1.roll);
    printf("the student name is %s\n",s1.name);
    printf("the student fees is %f",s1.fees);
    return 0;
}
