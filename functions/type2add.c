#include<stdio.h>
//type-2 -  no arguments and  with return 
int add();//function declaration
int main()
{
	int sum;
	sum=add();//function call
	printf("the value of sum=%d",sum);
}
int add()//funtion body
{
	int a,b,c;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
