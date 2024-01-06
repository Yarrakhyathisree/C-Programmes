#include<stdio.h>
//type-4 -with argument with return 
//type-4 -float add
float add(float,float,float);
int main()
{
	float a,b,c,sum;
	printf("Enter the value of a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	sum=add(a,b,c);
	printf("sum=%f",sum);
	return 0;
}
float add(float a,float b,float c)
{
	float d;
	d=a+b+c;                                                      
	return d;
	
}
