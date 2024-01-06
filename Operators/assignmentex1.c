#include<stdio.h>
int main()
{
	long int a,b,temp;
	printf("Enter any two numbers:");
	scanf("%ld%ld",&a,&b);
	printf("\nBefore swap a=%ld\tb=%ld",a,b);
	temp=a;/*first,assign value of a to temp*/
	a=b;/*later,assign value of b to a*/
	b=temp;/*finally,assign value of temp to b*/
	printf("\nafter swap a=%ld\tb=%ld",a,b);
}