//print square of a given number
#include<stdio.h>
int square(int);
int main()
{
	int n=0;
	printf("enter the value of n :");
	scanf("%d",&n);
	int result=square(n);
	printf("\nThe square value is :%d",result);
	return 0;
}
int square(int n)
{
	return n*n;
}
