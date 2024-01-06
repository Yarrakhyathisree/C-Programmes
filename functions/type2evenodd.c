#include<stdio.h>
//type-2 -no arguments with return
int evenodd();
int main()
{
	int flag;
	flag=evenodd();
	if (flag==1)
	printf("n is even");
	else 
	printf("n is odd");
}
int evenodd()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	if(n%2==0)
	return 1;
	else 
	return 0;
}
