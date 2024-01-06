#include<stdio.h>
//type-1 -no arguments no return
void evenodd();
int main()
{
	evenodd();
}
void evenodd()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	if(n%2==0)
	printf("n is even");
	else 
	printf("n is odd");
}
