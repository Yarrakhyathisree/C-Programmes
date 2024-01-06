#include<stdio.h>
//print prime or not 
//type-1 -no arguments no return 
void isprime();//function declaration
int main()
{
	isprime();//function call
	return 0;
}
void isprime()
{
	int i,n,count=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==2)
	printf("The given n value is prime");
	else
	printf("the given n value is not prime");
}
