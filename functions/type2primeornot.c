#include<stdio.h>
//print prime or not
//type-2 -no arguments with return
int isprime();
int main()
{
	int result;
	result=isprime();
	if(result==1)
	printf("n is prime");
	else
	printf("n is not prime");
}
int isprime()
{
	int i,n,count=0;
	printf("enter n value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if (n%i==0)
		count++;
	}
	if(count==2)
	return 1;
	else
	return 0;
	 
	
}
