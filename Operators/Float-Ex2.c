#include<stdio.h>
int main()
{
	int a,b;
	float c,d;
	printf("Enter a and b value:");
	scanf("%d%d",&a,&b);
	printf("Enter c and d values:");
	scanf("%f%f",&c,&d);
	printf("\nInteger Addition=%d",a+b);
	printf("\nInteger Subtraction=%d",a-b);
	printf("\nInteger Multiplication=%d",a*b);
	printf("\nInteger Division=%d",a/b);
	printf("\nInteger Modulus=%d",a%b);
	printf("\n Float Addition=%.2f",c+d);
	printf("\n Float substraction=%.2f",c-d);
	printf("\n Float mul=%.2f",c*d);
	printf("\n Float Division=%.2f",c/d);
	
	return 0;
}