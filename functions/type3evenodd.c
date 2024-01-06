#include<stdio.h>
//type-3 -with arguments no return
void evenodd(int);
int main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	evenodd(n);
}
void evenodd(int n)
{
	if(n%2==0)
	printf("n is even");
	else 
	printf("n is odd");
}
