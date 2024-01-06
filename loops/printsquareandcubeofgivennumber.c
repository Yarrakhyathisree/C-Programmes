//print square and cube of a given number
#include<stdio.h>
int sqr(int);
int cube(int);
float squareroot(float);
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("The square of the number=%d",sqr(n));
	printf("The square of the number=%d",cube(n));
	return 0;
} 
int sqr(int a)
{
	return a*a;
}
int cube(int a)
{
	return a*a*a;
}
