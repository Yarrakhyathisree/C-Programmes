//print the sum of natural numbers from 1 to n
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter upper limit:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum of first %d natural numbers=%d",n,sum);
	return 0;
}
