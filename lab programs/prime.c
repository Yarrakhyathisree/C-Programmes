#include<stdio.h>
int main()
{
	int n,i,flag=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("it is not prime");
	else
	printf("it is prime");
}
