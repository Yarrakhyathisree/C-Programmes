#include<stdio.h>
// type-1 - no arguments , with return
int square();
int cube();
int main()//calling function
{
	int r1,r2;
    r1=square();
    r2=cube();
    printf("square of n value =%d",r1);
    printf("cube of n value =%d",r2);
}
int square()//called function
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	return (n*n);
}
int cube()//called function
{
	int n1;
	printf("enter the value of n1:");
	scanf("%d",&n1);
	return (n1*n1*n1);
}
