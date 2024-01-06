#include<stdio.h>
// type-1 - no arguments , no return
void square();
void cube();
main()
{
square();
cube();
}
void square()
{
	int n,res;
	printf("enter n value:");
	scanf("%d",&n);
	res=n*n;
printf("square of given number n =%d",res);
	
}

void cube()
{
	int n1, r;
	printf("enter n1:");
	scanf("%d",&n1);
	r=n*n*n;
	printf("Cube of given number n=%d",n);
}
