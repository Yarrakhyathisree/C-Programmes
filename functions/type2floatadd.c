#include<stdio.h>
//type-2 -no arguments with return 
//type-2- float add
float add();
int main()
{
	float sum;
	sum=add();
	printf("the value of sum=%f",sum);
	return 0;
}
float add()
{
	float a,b,c,d;
	printf("enter the value of a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	d=a+b+c;
	return d;
}
