#include<stdio.h>
void main()
{
	int age;
	printf("Enter person age\n:");
	scanf("%d",&age);
	if(age>=18)
	printf("Person is eligible for vote");
	else
	printf("Person is not eligible for vote");
}
