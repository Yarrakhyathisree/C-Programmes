#include<stdio.h>
//type-1 -no arguments no return 
//type-1-float add
void sum();
int main()
{
	sum();
	return 0;
}
void sum()
{
	float a,b,c,d;
	printf("Enter the value of a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	d=a+b+c;
	printf("the value of d=%f",d);
	
}
