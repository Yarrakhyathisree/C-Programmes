#include<stdio.h>
//approach two
//type-3 -with arguments no return 
void isprime(int);
int main()
{
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	isprime(n);
	return 0;
}
void isprime(int n)
{
	int flag=0,i;
	for(i=2;i<=n/2;i++)
	{
	if(n%i==0)
	{ 
	  flag=1;
	  break;
	}
    }   
	if(flag==0)
	printf("the given nummber is prime");
	else
	printf("the given number is not prime");
}
