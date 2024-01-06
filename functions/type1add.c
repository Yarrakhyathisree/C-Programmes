#include<stdio.h>
//type-1 -  no arguments and no return 
void add();//function declaration
int main()
{
	add();//function call
}
void add()//funtion body
{
	int a,b,c;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("print the value of c=%d",c);
}
