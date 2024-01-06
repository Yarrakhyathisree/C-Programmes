#include<stdio.h>
//approach two
//type-4 -with arguments with return 
int isprime(int);
int main()
{
	int n,flag;
	printf("Enter the value of n:");
	scanf("%d",&n);
	flag=isprime(n);
    if(flag==1)
    printf("n is the prime number");
    else
    printf("n is not prime number");
    return 0;

}
int isprime(int n)
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
	return 1;
	else 
	return 0;
}

