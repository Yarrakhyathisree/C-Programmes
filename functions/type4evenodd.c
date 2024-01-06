#include<stdio.h>
//type-4 -with arguments with return
int evenodd(int);
int main()
{
	int n,flag;
	printf("enter n value:");
	scanf("%d",&n);
	flag=evenodd();
	if(n%2==0)
	printf("n is even");
	else 
	printf("n is odd");
}
int evenodd(int n)
{
	if(n%2==0)
	return 1;
	else 
	return 0;
}
