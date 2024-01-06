#include<stdio.h>
//type-4 -with argument with return 
//type-4 -float add optimised solution
float add();
int main()
{
	float a,b,c; 
	printf("Enter the value of a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	printf("sum=%f",add(a,b,c));
	
}
float add(float a,float b,float c)
{
	return a+b+c;
	
}
