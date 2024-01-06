#include<stdio.h>
int main()
{
	int a;
	float b;
	printf("Enter a value(Integer):");
	scanf("%d",&a);
	printf("\nEnter b value(Float):");
	scanf("%f",&b);
	printf("\n Addition of %d+%f=%f",a,b,a+b);
	printf("\n subtraction of %d-%f=%f",a,b,a-b);
	printf("\n Multiplication of %d*%f=%f",a,b,a*b);
	printf("\n DIvision of %d/%f=%f",a,b,a/b);
	return 0;
}